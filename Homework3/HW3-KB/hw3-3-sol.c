// hw3-3-sol.c
// kbrleson@memphis.edu

#include <stdio.h>

void rotate(int y[], const size_t n);

int main(void)
{
	int x[7] = {1, 3, 5, 7, 2, 4, 6};
	rotate(x, 7);

	int i;

	for (i = 0; i < 7; i++)
        	printf("%d ", x[i]);

	printf("\n");
}

void rotate(int y[], const size_t n)
{
        int partial = y[0], index;

        for (index = 0; index < n - 1; index++)
                y[index] = y[index + 1];

        y[n - 1] = partial;
}

