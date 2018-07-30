#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main() {

	int num = 1;
	int input1, input2;
	
	printf("Enter the two numbers you want to exclude:\n");
	scanf(" %d", &input1);
	scanf(" %d", &input2);
	printf("\n");

	do {
		if ((num == input1) || (num == input2)) {
			num++;
			continue;
		}

		printf("Number %d is available. \n", num);
		num++;
	} while (num <= 10);
	

	getch();
	return 0;
}