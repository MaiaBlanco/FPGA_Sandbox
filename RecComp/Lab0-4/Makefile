
matmul.out : mmm.c 
	gcc -mavx2 -mfma mmm.c -o matmul.out -O3 -Os -Wextra -Wall -Werror -lm -fopenmp
all : matmul.out
	./matmul.out
clean : 
	rm *.out
