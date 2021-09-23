#include <stdio.h>

int main(void)
{
	const float pi = 3.14159265; // Would use the M_PI const from math.h, but was told by you to only use features covered

	float r1, r2, r3;

	printf("Enter three floating-point numbers:\n");

	scanf("%f%f%f", &r1, &r2, &r3);

	float a1 = pi * (r1 * r1);
	float a2 = pi * (r2 * r2);
	float a3 = pi * (r3 * r3);

	printf("%10s %10s", "Radius", "Area");
	printf("\n%10.4f %10.4f", r1, a1);
        printf("\n%10.4f %10.4f", r2, a2);
        printf("\n%10.4f %10.4f\n", r3, a3);
}


