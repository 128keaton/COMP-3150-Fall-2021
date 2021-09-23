#include <stdio.h>

int main(void)
{
	printf("Enter two integers: ");

	int x, y;
	scanf("%d%d", &x, &y);


	printf("\nSTARTING VALUES: x = %d, y = %d\n", x, y);

	puts("OPERATION: x = y - x");
	x = y - x;
        printf("VALUES: x = %d, y = %d\n\n", x, y);


        puts("OPERATION: y += 2 * x");
	y += 2 * x;
        printf("VALUES: x = %d, y = %d\n\n", x, y);


        puts("OPERATION: x = 4 + ++y");
	x = 4 + ++y;
	printf("VALUES: x = %d, y = %d\n\n", x, y);

        puts("OPERATION: y = x--");
	y = x--;
	printf("VALUES: x = %d, y = %d\n\n", x, y);

        puts("OPERATION: x -= y - 3");
	x -= y - 3;
	printf("FINAL VALUES: x = %d, y = %d\n", x, y);
}
