#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	typedef struct {int x; int y;} pair;

	pair * p = malloc(sizeof(pair));

	(*p).x = 3;
	(*p).y = 4;
}
