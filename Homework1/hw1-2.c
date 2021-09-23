/*
	Keaton Burleson
	September 1st, 2021
	COMP-3150
	Homework 1

	Compiled with gcc v10.3.0 on x86_64 Linux
*/

#include <stdio.h>

int myprog(void)
{
	int a = 8;
	printf("%d", a); // missing semicolon

	unsigned int b = 3 - 7;
	printf("%u", b + 2);

	int myVar;
	printf("%d", myVar); // missing semicolon, wrong variable name

	int c = 9; // fixed: invalid redeclaration of 'a', renamed to 'c'
	c=-5;printf("%d",c);

	int d = 42;
	puts("d = ");
	puts(d); // warning, passing the int variable 'd' to puts creates a pointer without a cast
	printf("d = %d", d); // need to use 'printf' instead of 'puts' for formatting output
	d = d / 0; // warning, this is a division by zero. This is a compiler warning using gcc v10.3.0

	int sink = -1;
	float float1 = 1; // cannot define a variable without a variable name
	int e = 15 - e;
	const int f = 6;
	// f = 6; // cannot reassign readonly variable (const)
	// f = 7; // cannot reassign readonly variable (const)
	d = f;

	int g = myVar;
	g = 0; // cannot assign a variable this way/telling compiler to assign the value of 'g' to 0

	long long h = 10;
	h =  h / 3;
	h =- 3;

	int x = 2, y = 3, product = x * y; // need to use '*' explicitly to get the product of two variables
	x = y = x = y;
}
