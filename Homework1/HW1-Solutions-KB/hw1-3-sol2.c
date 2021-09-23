#include <stdio.h>

int main(void)
{
	printf("Enter two integers: ");

	int x, y;
	scanf("%d%d", &x, &y);

	x = 2;
	y += 7;
        printf("FINAL VALUES: x = %d, y = %d\n", x, y);
}
