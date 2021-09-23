#include <stdio.h>

void sortByRef(int * p, int * q, int * r);

void swap(int * p, int * q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(void)
{
	int a = 3, b = 1, c = 2;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	sortByRef(&a, &b, &c);
        printf("a = %d, b = %d, c = %d\n", a, b, c);
}


void sortByRef(int * p, int * q, int * r)
{
	int arr[3] = {*p, *q, *r};
   	int i, j;
   	for (i = 0; i < 2; i++)
   	{
	       for (j = 0; j < 3-i-1; j++)
		{
	 		if (arr[j] > arr[j+1])
              			swap(&arr[j], &arr[j+1]);
		}
	}

	*p = arr[0];
	*q = arr[1];
	*r = arr[2];
}
