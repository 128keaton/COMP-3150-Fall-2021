#include <stdio.h>
#include <string.h>

unsigned int wordCount(const char str[]);

int main(void)
{
    printf("%d\n", wordCount(" Hello world nice to meet you "));
}

unsigned int wordCount(const char str[])
{
    const char* currStr = str; // I had to do this so I could modify the string without modifying the reference
    int currCount = 0;
    int inWord = 0;
    
    do switch(*currStr) {
           case '\0':
           case ' ': case '\t': case '\n': case '\r':
                if (inWord) { inWord = 0; currCount++; }
               break;
           default: inWord = 1;
       } while(*currStr++);


    
    return currCount;
}
