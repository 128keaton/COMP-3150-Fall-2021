// hw5-3-sol.c - kbrleson
#include <stdio.h>

int main(int argc, char * argv[])
{
    int outer;

    int largstarg = 0;

    for( outer = 1; outer < argc; outer++ )
    {
	int arglen = 0;

	while( argv[outer][arglen] != '\0' )
        	arglen++;

	// This logic takes care of strings larger/smaller
	if (arglen > largstarg)
		largstarg = arglen;

	char revarg[arglen];
  	int i, j = 0;

	revarg[0] = '\0';

	for( i = 0, j = arglen - 1 ; j >= 0, i < largstarg ; j--, i++ )
		revarg[i] = argv[outer][j];

	printf("%s\n", revarg);
    }
}
