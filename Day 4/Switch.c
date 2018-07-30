#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main() {

	char grade;

	printf("What is your grade?\n");scanf(" %c", &grade);

	switch (grade) {
	case 'A' : printf("a");
			   break;
	case 'B' : printf("b");
			   break;
	case 'C' : printf("c");
			   break;
	case 'D' : printf("d");
			   break;
	case 'F' : printf("f");
			   break;


	}

	getch();
	return 0;
}