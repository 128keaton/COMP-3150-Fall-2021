#include <stdio.h>
#include <string.h>

void truncate(char str[]);

int main(void)
{
    char s[] = " Hello world ";
    truncate(s);
    puts(s);
}

void truncate(char str[])
{
    char * token = strtok(str, "  ");
    while(token != NULL) {
        token = strtok(NULL, " ");
    }
}
