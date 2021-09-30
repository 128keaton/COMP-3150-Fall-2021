#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// This is a memory leak
	// By allocating 4 bytes of memory for each iteration
	// Over 10 billion iterations, this code will try to allocate 40 billion bytes
	for(long long i = 0; i < 10000000000; i++) {
		int * p = malloc(sizeof(int));
		*p = 0;
	}

}
