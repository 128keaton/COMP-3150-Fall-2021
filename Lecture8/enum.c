#include <stdio.h>

typedef enum {SPRING,SUMMER,FALL,WINTER} season; // Dr. Watson likes this way

const char *seasonIcon(const enum season x);

int main(void)
{

// 	* Can also define anonymously *
//	enum  {
//        	SPRING,
//        	SUMMER,
//       	FALL,
//	        WINTER
//	} a = FALL, b = SPRING;

	enum season a = FALL, b = SPRING;

	a = b;
	b = WINTER;

	enum season *p = &a;
	enum season y[3] = {
		FALL,
		SUMMER,
		FALL
	};

	puts(seasonIcon(a));
	puts(seasonIcon(SUMMER));

	enum month {
		JAN = 1,
		FEB,
		MAR,
		APR,
		MAY,
		JUN,
		JUL,
		AUG,
		SEP,
		OCT,
		NOV,
		DEC
	};

}


const char *seasonIcon(const enum season x)
{
	const char *icon[] = {
		"Flower",
		"Sun",
		"Leaf",
		"Snowflake"
	};

	return icon[x];
}
