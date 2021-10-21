// kbrleson - Fall 2021
// Look, I wrote this on a red-eye flight to LAX in the middle seat
// I didn't want to write some nasty code to maintain a randomized index
// My solution "works" but its not exactly what you wanted

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct  {
	char * clue;
	char * answer;
} flashcard;

void shuffleDeck(flashcard *flashcards, int totalCards);

int main(int argc, char * argv[]) {
	// Check if we have the filename passed as an argument
	if (argc != 2) {
		printf("No arguments supplied!\r\n");
		exit(1);
	}
	char * fileName = argv[1];

	// Attempt to open the input file via the file name
	FILE * inputHandle = fopen(fileName, "r");
        if (inputHandle == NULL) {
                printf("Unable to open %s\r\n", fileName);
                exit(1);
        }

	// We will use these variables to iterate through the data
	// and later the guesses/attempts
        int cardIndex;
        size_t totalCards;

	// This variable is directly related to how stupid the user is
        int totalScore = 0;

	// Read the total amount of flashcards from the input file
        fscanf(inputHandle, "%zu\n", &totalCards);

	// Create a flashcards variable, setting the length to the total amount
	// of flashcards specified in the input file
        flashcard flashcards[totalCards];

	// Begin iterating through the input file's individual lines
        for (cardIndex = 0; cardIndex < totalCards; cardIndex++) {

                // Initialize the clue/answer properties of the flashcard at cardIndex
                flashcards[cardIndex].clue = (char*)malloc(sizeof(char*));
                flashcards[cardIndex].answer = (char*)malloc(sizeof(char*));

                // Read the clue into the struct
                fgets(flashcards[cardIndex].clue, 52, inputHandle);

                // Read the answer into the struct
                fgets(flashcards[cardIndex].answer, 52, inputHandle);
        }

	// Close the input file's file handle
	fclose(inputHandle);

	// Call our shuffle function to shake it up a little bit
	shuffleDeck(flashcards, totalCards);


	// Start iterating through the cards, asking the user to 
	// input a guess based off the hint provided
	for (cardIndex = 0; cardIndex < totalCards; cardIndex++) {
		// Create two char * variables, guess will hold
		// the user's input, and answer is...the answer (wooow)
		char * guess;
		char * answer = flashcards[cardIndex].answer;

		// Print the clue in the terminal, then a prompt caret
		printf("\n%s", flashcards[cardIndex].clue);
		printf("> ");

		// Read the user input into the guess variable
		fgets(guess, 52, stdin);

		// Probably useless to assign it to a variable,
		// instead of just putting the call to strcmp in the if statement
		// buuuuuut w/e
		int result = strcmp(answer, guess);

		// This is a direct comparison to zero that works fine with gcc
		if (!result) {
			printf("Yes!\n");
			totalScore++;
		} else {
			printf("No, its %s", answer);
		}

		// Finally, free the allocated memory for this flashcard
		free(flashcards[cardIndex].clue);
		free(flashcards[cardIndex].answer);
	}

	// Print the user's score
	printf("\r\nYour score: %d/%ld\r\n", totalScore, totalCards);
}


void shuffleDeck(flashcard *flashcards, int totalCards) {
    srand((unsigned)time(NULL));

    for (int i = 0; i < totalCards - 1; i++) {
        size_t j = i + rand() / (RAND_MAX / (totalCards - i) + 1);
        flashcard c = flashcards[j];
        flashcards[j] = flashcards[i];
        flashcards[i] = c;
    }
}

