#include <stdio.h>

int main(void)
{
	struct time {
		char m;
		int hour;
		int minute;
	};

	// WHOOOOO CAAAAN SAYYY WHERE THE ROAAAADD GOES WHERE THE DAAAAYYY GOEEEESS ONLY struct time
	struct time start = {
			'p',
			5,
			30,
	};

	printf("%d:%.2d %cm\n", start.hour, start.minute, start.m);

	struct time end  = {.hour = 6, .minute = 55, .m = 'p'};
	printf("%d:%.2d %cm\n", end.hour, end.minute, end.m);
	end = (struct time){'a', 12, 0};
        printf("%d:%.2d %cm\n", end.hour, end.minute, end.m);

	printf("Struct time has a size of %zu bytes\n", sizeof (struct time));


	end = start;

	if (end.m == start.m && end.hour == start.hour && end.minute == start.minute) puts("Woah");
}

