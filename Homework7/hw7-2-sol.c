// kbrleson - CPP Fall 2021
// hw7-2-sol.c

#include <stdio.h>
#include <stdlib.h>

int getGradeValue(char letterGrade);

int main() {
	// Create/open the file
	FILE * transcriptHandle = fopen("transcript.txt", "w+");

	// Use this for calculating average later
	int qualityPoints = 0;
	int creditHoursTotal = 0;

	// "Active" variables changing in the while loop
	int creditHours;
        char letterGrade;

	// Wait for a zero
        while(scanf("%d",  &creditHours) > 0) {
		if (creditHours == 0)
			break;

		// Retrieve the letter grade inputted
		scanf(" %c", &letterGrade);

		// Add the calculated qualityPoints to the total
		qualityPoints += (getGradeValue(letterGrade) * creditHours);

		// Additionally, add the creditHours
		creditHoursTotal += creditHours;

		// Append the CREDIT_HOURS LETTER_GRADE line to the transcript.txt file
		fprintf(transcriptHandle, "%d %c\r\n", creditHours, letterGrade);
	}

	// Calculate the GPA
	float gpa = (float)qualityPoints/(float)creditHoursTotal;

	// Finally, write the GPA line to the transcript.txt file
	fprintf(transcriptHandle, "GPA: %.03f\r\n", gpa);

	// Close the file handle to the transcript
	fclose(transcriptHandle);
}

// This functions accepts a letter grade (A, B, C, D, F) and returns the point value
// assocated with the letter grade. Any other letters return 0, like F
int getGradeValue(char letterGrade) {
	switch (letterGrade) {
		case 'A':
		case 'a':
			return 4;
		case 'B':
		case 'b':
			return 3;
		case 'C':
		case 'c':
			return 2;
		case 'D':
		case 'd':
			return 1;
		default:
			return 0;
	}
}
