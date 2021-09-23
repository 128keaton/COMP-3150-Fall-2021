#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int attemptGuess(int *guesses, char *correctGuess);
void printGuessCount(int *guesses);
void pickWord(char *chosenWord);
void shuffleWord(char *word, char *shuffledWord);

int main(void)
{
	int guesses = 0;
	char chosenWord[16], shuffledWord[16];

	pickWord(chosenWord);
	shuffleWord(chosenWord, shuffledWord);

	printf("Guess the word: %s\n", shuffledWord);
	while(1)
	{
		int result = attemptGuess(&guesses, chosenWord);
		if (result == 1)
		{
			printGuessCount(&guesses);
			break;
		} else {
			puts("Guess again");
		}
	}
}

int attemptGuess(int *guesses, char *correctGuess)
{
	   char currentAttempt[16];

	   scanf("%s", currentAttempt);

	   (*guesses)++;

	   return strcmp(correctGuess, currentAttempt) == 0;
}

void printGuessCount(int *guesses)
{
	if (*guesses == 1)
		printf("It took you 1 try\n");
	else
		printf("It took you %d tries\n",  *guesses);
}

void pickWord(char *chosenWord)
{
	const char dict [8][16] = {
                "programming",
                "variable",
                "conditional",
                "loop",
                "function",
                "array",
                "string",
                "pointer"
        };

	srand(time(NULL));
	const char *randomWord = dict[rand()%8];

	strcpy(chosenWord, randomWord);
	return;
}


void shuffleWord(char *word, char *shuffledWord)
{
	int pick, wordLength, i, k = 0;
	double d = 0;
	char tmp;
	char modifiedWord[16];

	strcpy(modifiedWord, word);

	wordLength = strlen(modifiedWord) - 1;
	for(i = 0; i < wordLength; i++) {
		srand(time(NULL));
	        d = (double)rand() / ((double)RAND_MAX + 1);
        	k = (int)(d * (wordLength - 2));
		pick = 1 + k;

  		tmp = modifiedWord[i];
  		modifiedWord[i] = modifiedWord[pick];
  		modifiedWord[pick] = tmp;
	}

	strcpy(shuffledWord, modifiedWord);
	return;
}
