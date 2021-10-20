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

        while(scanf("%d",  &creditHours) > 0) {
		if (creditHours == 0)
			break;

		scanf(" %c", &letterGrade);

		qualityPoints += (getGradeValue(letterGrade) * creditHours);
		creditHoursTotal += creditHours;

		fprintf(transcriptHandle, "%d %c\r\n", creditHours, letterGrade);
	}

	float gpa = (float)qualityPoints/(float)creditHoursTotal;
	fprintf(transcriptHandle, "GPA: %.03f\r\n", gpa);
}

int getGradeValue(char letterGrade) {
	switch (letterGrade) {
		case 'A':
			return 4;
		case 'B':
			return 3;
		case 'C':
			return 2;
		case 'D':
			return 1;
		default:
			return 0;
	}
}
