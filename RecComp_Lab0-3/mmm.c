/*
 * Author: Mark Blanco
 * Date: Sept 4 2017
 * Description: Naive matmul implementation with single thread using floats.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAT_SIZE 4096
#define IDX2C(i,j) (((j)*(MAT_SIZE))+(i)) // defined as shortcut for indexing into matrix

double A [MAT_SIZE*MAT_SIZE] = {0};
double B [MAT_SIZE*MAT_SIZE] = {0};
double C [MAT_SIZE*MAT_SIZE] = {0};

void matmul(double * a, double * b, double * c)
{
	int i,j,k;
	for (i = 0; i < MAT_SIZE; i ++)
	{
		for (j = 0; j < MAT_SIZE; j++)
		{
			// Be sure to reset the values from previous runs
			C[IDX2C(i,j)] = 0;
			for (k = 0; k < MAT_SIZE; k ++)
			{
				C[IDX2C(i, j)] += A[IDX2C(i,k)] * B[IDX2C(k,j)];
			}
		}
	}
}

int main( int argc, char ** argv )
{
	int i,j;
  	clock_t start[10], end[10] = {0};
  	double time_elapsed[10] = {0};
  	double average = 0;
  	double std_dev = 0;
  	printf("Initializing random matrix values.\n");
  	// initialize random values to the matrices:
  	for (i = 0; i < MAT_SIZE; i++)
		{
		for (j = 0; j < MAT_SIZE; j++){
		  A[IDX2C(i,j)] = rand() / (double)RAND_MAX;
		  B[IDX2C(i,j)] = rand() / (double)RAND_MAX;
		}
	}
	printf("Starting 10 matmul runs.\n");
	for (i = 0; i < 10; i++)
	{
		start[i] = clock();
		matmul(A,B,C);
		end[i] = clock();
		time_elapsed[i] = (double)end[i] - (double)start[i] / CLOCKS_PER_SEC;
		printf("Performed MATMUL operation with %d x %d matrices in %f seconds.\n", 
			MAT_SIZE, MAT_SIZE, time_elapsed[i] ); 
		average	+= time_elapsed[i];
	}
	average	/= 10;
	for (i = 0; i < 10; i ++)
	{
		std_dev += pow(time_elapsed[i] - average, 2);
	}
	std_dev /= 10;
	printf("Average time: %f seconds.\nStd deviation: %f seconds.\n", average, std_dev);
	return 0;
}

