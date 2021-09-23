#include <stdio.h>


/* Hello World 1.0 (not the standard way a C programmer would typically do it)
void main()
{
	puts("Hello World!");
}
*/



int main(void)
{
	printf("Hello World!\n");
	printf("%d", 7);

	int x = 3;
	int y = 2 + x;
	x = y - 1;
	y = x * y;
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	for (int i = 0; i < 100; i++) {
		int z;
		printf("z = %d\n", z);
		sleep(1);
	}
}
