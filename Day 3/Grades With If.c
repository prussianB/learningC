#include <stdio.h>
#include <stdlib.h>


int main() {
	float grade1;
	float grade2;
	float grade3;

	printf("Enter your 3 grades: \n");
	scanf(" %f", &grade1);
	scanf(" %f", &grade2);
	scanf(" %f", &grade3);

	float avg = (grade1 + grade2 + grade3) / 3;
	printf("Average: %.2f \n", avg);

	if (avg <= 20) {
		printf("F\n");
	}
	else if (avg <= 40) {
			printf("D\n");
			}
		else if (avg <= 60){
			printf("C\n");
			}
			else if (avg <= 80){
				printf("B\n");
			}
				else {
				printf("A\n");
		}

	getch();
	return 0;
}