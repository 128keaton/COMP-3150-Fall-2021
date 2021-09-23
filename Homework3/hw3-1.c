#include <stdio.h>

int foo(int x);
int bar(int x);

int main(void)
{
	// checkpoint
	bar(1);
	// checkpoint
}

int foo(int x)
{
	int y = x + 2;
	// checkpoint
	x = (x != 0) ? 5 : bar(++y);
	// checkpoint
	return y;
}

int bar(int y)
{
	int x = y - 1;
	// checkpoint
	x = (y > 0) ? foo(x) : y;
	// checkpoint
	return x;
}
