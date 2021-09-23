#include <stdio.h>	// Standard system C library
#include <limits.h>	// Standard limits C library (INT_MIN/INT_MAX and gang)
#include <math.h>	// Standard math C library (M_PI)

int main(void)
{
	int x0 = INT_MAX; // Largest value that can be stored as an int
	int x1 = INT_MIN; // Smallest value that can be stored as an int
	long long x2 = LONG_MAX; // super long numbers beyond INT_MAX or INT_MIN
	unsigned int x3 = 10; // cannot store negative values
	unsigned long long x4 = 5000000000000; // super long bro
	float x5 = M_PI; // just four bytes total
	double x6 = M_PI * 2; // extra four bytes used

	// %d specifier for int
	printf("x0 = %d\n", x0);
        printf("x1 = %d\n", x1);


	// %lld specifier for long
	printf("x2 = %lld\n", x2);

	// %u specifier for unsigned int
	printf("x3 = %u\n", x3);

	// %llu specifier for unsigned long long
	printf("x4 = %llu\n", x4);

	// %f specifier for float
	printf("x5 = %f\n", x5);

	// %lf specifier for double
	printf("x6 = %lf\n", x6);


	// This const cannot be changed from its initial value
	const int w = 2;

	// Thus, if you need to set a value that you guarantee will not change, use _const_
	// w = 3; // this results in a compiler error

}
