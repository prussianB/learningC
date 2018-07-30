#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main() {

	char pizza;

	printf("Enter a character. Anything you want.\n");
	scanf_s(" %c", &pizza);

	if (isalpha(pizza)) {
		printf("%c is a letter.\n", pizza);
	}
	else if (isdigit(pizza)) {
		printf("%c is a number.\n", pizza);
	}
	else {
		printf("%c is a safdsdsfvderfs.\n", pizza);
	}

	getch();
	return 0;
}