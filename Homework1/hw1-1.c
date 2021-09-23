#include <stdio.h>

int main(void)
{
	int x = 7 % 4, y = x / 2;
	printf("%2d\\\n%-2d\"\n%u", x, y++, 11 - 2 * 3);
	int z = y - x;
	printf("%d\n", ++z);
}