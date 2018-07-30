#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {

	int dice1;
	int dice2;
	int try = 0;

	printf("press any button to roll 2 dice.\n");

	srand(time(NULL));

	while (1) {
		getch();
		dice1 = (rand() % 6) + 1;
		dice2 = (rand() % 6) + 1;
		printf("You rolled %d-%d.\n", dice1, dice2);
		try++;
		if (dice1 == dice2){
			printf("Grats! A double! ");
			break;
		}
	}

	printf("You rolled a double dice in %d tries.", try);

	getch();
	return 0;

}