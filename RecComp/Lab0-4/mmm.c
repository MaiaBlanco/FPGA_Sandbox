/*
 * Author: Mark Blanco
 * Date: Sept 4 2017
 * Description: Naive matmul implementation with single thread using floats.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// To use functions from OpenMP:
#include <omp.h>
// To use Intel SSE2 intrinsics:
#include <emmintrin.h>
#include <immintrin.h>

#define MAT_SIZE 4096
#define BLOCK_SIZE 128
//#define IDX2C(i,j) (((j)*(MAT_SIZE))+(i)) // defined as shortcut for indexing into matrix

double A [MAT_SIZE][MAT_SIZE] = {{0}};
double B [MAT_SIZE][MAT_SIZE] = {{0}};
double C [MAT_SIZE][MAT_SIZE] = {{0}};

// Resources for learning Intel compiler intrinsics:
// https://software.intel.com/en-us/articles/how-to-use-intrinsics/
// https://www.codeproject.com/articles/874396/crunching-numbers-with-avx-and-avx
// https://software.intel.com/sites/landingpage/IntrinsicsGuide
void matmulv7()
{
	
	int i,j,k;
	__m256d va, vb, vacc;
	double B2[MAT_SIZE][MAT_SIZE];
	// Transpose B (so now accesses would look like B[j][k]):
	// Hopefully worth it...
	for (i = 0; i < MAT_SIZE; i++)
	{
		for (j = 0; j < MAT_SIZE; j ++)
		{
			B2[i][j] = B[j][i];
		}
	}
	for (i = 0; i < MAT_SIZE; i+=1)
	{
		for (j = 0; j < MAT_SIZE; j+=1)
		{
			vacc = _mm256_setzero_pd();
			for (k = 0; k < MAT_SIZE; k+=4)
			{
				// Load four doubles from A:
				va = _mm256_load_pd(&A[i][k]);			
				// Load 4 doubles from B (a bit more tricky, unless...transpose?):
				vb = _mm256_load_pd(&B2[j][k]);
				// Not needed with current order of loop iterations:
				//c = _mm256_load_pd(C[i]+j);
				_mm256_fmadd_pd(va, vb, vacc);
				vacc = _mm256_hadd_pd(vacc, vacc);
				vacc = _mm256_hadd_pd(vacc, vacc);
				//_mm256_store_pd(&C[i][j], vacc);
				//C[i][j] += A[i][k] * B[k][j];
			}
		// Extract the 1st float from vacc to C[i][j]:

		}
	}
}

// Blocking on k loop (middle loop)
/*void matmulv6()
{
	int bk,i,j,k;
	for (bk = 0; bk < MAT_SIZE; bk+=BLOCK_SIZE)
	{
		for (i = 0; i < MAT_SIZE; i ++)
		{
			for (k = bk; k < bk+BLOCK_SIZE; k ++)
			{
				for (j = 0; j < MAT_SIZE; j ++)
				{
					C[i][j] += A[i][bk+k] * B[bk+k][j];
				}
			}
		}
	}
}

// Using this as a reference for blocking: 
// https://stackoverflow.com/questions/38190006/matrix-multiplication-why-non-blocked-outperforms-blocked?rq=1
// Blocking on inner loop (j-loop)
void matmulv5()
{
	int bj,i,j,k;
	for (bj = 0; bj < MAT_SIZE; bj+=BLOCK_SIZE)
	{
		for (i = 0; i < MAT_SIZE; i ++)
		{
			for (k = 0; k < MAT_SIZE; k ++)
			{
				for (j = bj; j < bj+BLOCK_SIZE; j ++)
				{
					C[i][bj+j] += A[i][k] * B[k][bj+j];
				}
			}
		}
	}
}*/

void matmulv4()
{
	int i,j,k;
	for (j = 0; j < MAT_SIZE; j ++)
	{
		for (k = 0; k < MAT_SIZE; k ++)
		{
			for (i = 0; i < MAT_SIZE; i ++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

// Of non-blocked approaches, this is the fastest version
// I think the order of loop iterations here w.r.t the MAC line 
// affects runtime positively because first indices for the matrices change as infrequently as possible,
// thereby keeping those contiguos slices of memory in cache for longer. Keeping the second index the same
// probably wouldn't have the same effect since changing the second index will hop between contiguous
// sections of memory.
void matmulv3()
{
	int i,j,k;
	for (i = 0; i < MAT_SIZE; i ++)
	{
		for (k = 0; k < MAT_SIZE; k ++)
		{
			for (j = 0; j < MAT_SIZE; j ++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void matmulv2()
{
	int i,j,k;
	for (k = 0; k < MAT_SIZE; k ++)
	{
		for (j = 0; j < MAT_SIZE; j++)
		{
			for (i = 0; i < MAT_SIZE; i ++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void matmul()
{
	int i,j,k;
	for (i = 0; i < MAT_SIZE; i ++)
	{
		for (j = 0; j < MAT_SIZE; j++)
		{
			for (k = 0; k < MAT_SIZE; k ++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

int main()
{
	int i,j;
  	clock_t start[10], end[10] = {0};
		double omp_start[10], omp_end[10] = {0};
  	double time_elapsed[10] = {0};
		double omp_time_elapsed[10] = {0};
  	double average = 0;
		double omp_average = 0;
  	double std_dev = 0;
		double omp_std_dev = 0;
  	printf("Initializing random matrix values.\n");
  	// initialize random values to the matrices:
  	for (i = 0; i < MAT_SIZE; i++)
		{
		for (j = 0; j < MAT_SIZE; j++){
		  A[i][j] = rand() / (double)RAND_MAX;
		  B[i][j] = rand() / (double)RAND_MAX;
		}
	}
	printf("Starting 10 matmul runs.\n");
	for (i = 0; i < 10; i++)
	{
		start[i] = clock();
		omp_start[i] = omp_get_wtime();
		matmulv3();
		end[i] = clock();
		omp_end[i] = omp_get_wtime();
		time_elapsed[i] = ((double)end[i] - (double)start[i]) / CLOCKS_PER_SEC;
		omp_time_elapsed[i] = (omp_end[i] - omp_start[i]);
		printf("Performed MATMUL operation with %d x %d matrices in %f seconds (time library measurement).\n OMP wall time was %f seconds.\n", 
			MAT_SIZE, MAT_SIZE, time_elapsed[i], omp_time_elapsed[i] );
		average	+= time_elapsed[i];
		omp_average += (double)omp_time_elapsed[i];
	}
	average	/= 10;
	omp_average /= 10;
	for (i = 0; i < 10; i ++)
	{
		std_dev += pow(time_elapsed[i] - average, 2);
		omp_std_dev += pow(omp_time_elapsed[i] - omp_average, 2);
	}
	std_dev /= 10;
	omp_std_dev /= 10;
	printf("Average ctime-measured time: %f seconds\n\tStd deviation: %f seconds.\n", average, std_dev);
	printf("Average OMP-measured wall time: %f seconds.\n\tStd dev: %f seconds\n.", omp_average, omp_std_dev);
	return 0;
}

