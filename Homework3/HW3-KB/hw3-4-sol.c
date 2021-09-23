// hw3-4-sol.c
// kbrleson@memphis.edu

#include <stdio.h>

size_t numDistinct(const unsigned int scores[], const size_t n);

int main(void)
{
	int x[6] = {80, 72, 80, 66, 99, 66};
	printf("%ld\n", numDistinct(x, 6));
}

size_t numDistinct(const unsigned int scores[], const size_t n)
{
	int index1, index2, totalDistinct = 1;

	for (index1 = 1; index1 < n; index1++)
	{
		for(index2 = 0; index2 < index1; index2++)
		{
			if (scores[index1] == scores[index2])
				break;
		}

		if (index1 == index2)
			totalDistinct++;
	}

	return totalDistinct;
}
