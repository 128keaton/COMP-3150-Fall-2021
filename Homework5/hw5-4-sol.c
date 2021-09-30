// hw5-4-sol.c - kbrleson
#include <stdio.h>
#include <stdlib.h>

int whole_frac_comp (const void * a, const void * b);

int main(void)
{
	int n;
	double x[] = {2.7, 1.8, 3.4, 1.9, 3.6, 2.5};

	printf("Before sorting the list is: \n");
   	for( n = 0 ; n < 6; n++ ) {
      		printf("%0.1f ", x[n]);
   	}

   	qsort(x, 6, sizeof(double), whole_frac_comp);

	printf("\nAfter sorting the list is: \n");
   	for( n = 0 ; n < 6; n++ ) {
     		 printf("%0.1f ", x[n]);
   	}

	printf("\r\n");
}

int whole_frac_comp (const void * a, const void * b) {
	double lhs = (*(double*)a);
	int lhs_whole = lhs;
	double lhs_frac = (lhs - lhs_whole);

	double rhs = (*(double*)b);
        int rhs_whole = rhs;
	double rhs_frac = (rhs - rhs_whole);


	if (lhs_whole == rhs_whole) {
		return 1 - ((lhs_frac - rhs_frac) * 10);
	}

	return (lhs_whole - rhs_whole);
}
