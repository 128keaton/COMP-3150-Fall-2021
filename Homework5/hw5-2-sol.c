#include <stdio.h>

// hw5-2-sol.c -- kbrleson

void accumulate(const int * x, int * y, const size_t n);
void print_arr(const int * arr, const size_t n);

int main(void)
{
	int x[5] = {1, 3, 5, 7, 100};
	int y[5];
	accumulate(x, y, 5);

	printf("x = ");
	print_arr(x, 5);

	printf("y = ");
	print_arr(y, 5);
}

void print_arr(const int * arr, const size_t n)
{

	int i;

	for ( i = 0 ; i < n ; i++) {
    		printf("%d ",arr[i]);
	}

	printf("\n");
}

void accumulate(const int * x, int * y, const size_t n)
{
	int idx;

	for( idx = 0; idx < n; idx++ )
	{
		if (idx == 0)
			*y = *x;
		else
			*y = *(y - 1) + *x;

		y++;
		x++;
	}

}
