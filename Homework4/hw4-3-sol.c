#include <stdio.h>

int main(void)
{
	int a = 3;
	printf("a = %d\n", a);

	int * b = &a;
	printf("a ptr = %p, b ptr = %p, b value = %d\n", (void*)&a, (void*)b, *b);

	*b = a * 2;
	printf("b value: %d\n", *b);

	a = 2 * *b;
	printf("a value: %d\n", a);


	int c = (*b)--;
	printf("c value: %d\n", c);

	int * d = &c;
        printf("c ptr = %p, d ptr = %p, d value = %d\n", (void*)&c, (void*)d, *d);

	*b = *d;
	printf("*b = *d, b value: %d, d value: %d\n", *b, *d);

	b = d;
	printf("b = d, b value: %d, d value: %d\n", *b, *d);

	*b = 1;
	printf("*b = 1, b value: %d\n", *b);

	a = *d;
        printf("*a = *d, a value: %d\n", a);
}
