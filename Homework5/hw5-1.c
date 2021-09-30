#include <stdio.h>

int main(void)
{
	int x, y = 2;
	int * p = NULL;
	int * q = p;
	int * const r = &x;
	const int * s = &y;
	do {
		int z = 3;
		p = &z;
	} while (0);

	// *p = y;
	// y = *q;
	// z = *s;
	// y = *r;
	// *r = s;
	// p = *s;
	// r = &y;
	// *s = 4;
	// x = &q;
	// &y = r;
}
