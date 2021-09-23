// hw3-2-sol.c
// kbrleson@memphis.edu

#include <stdio.h>

size_t indexOfMin(const int y[], const size_t n);

int main(void)
{
	int x[7] = {14, 13, 12, 15, 12, 13, 11};

	printf("%ld\n", indexOfMin(x, 6));
}

size_t indexOfMin(const int y[], const size_t n)
{
        if (n <= 1)
                return 0;

        int size = n - 1;
        int index = indexOfMin(y, size);

        return y[size] < y[index] ? size : index;
}

