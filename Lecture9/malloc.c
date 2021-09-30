#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	printf("Enter an integer to square: ");

	// allocate a section of the memory, 4 bytes (size of int)
	int * p = malloc(sizeof(int)); // Prototype: void * malloc(size_t);

	// Assign the value of the reference to the integer a user passed
	scanf("%d", p);

	// Square the value
	*p *= *p;

	// Print the squared integer
	printf("Squared: %d\r\n", *p);

	// Free up the allocated memory
	free(p); // Prototype: void free(void *);



}
