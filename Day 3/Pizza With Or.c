#include <stdio.h>
#include <stdlib.h>


int main() {
	char answer;

	printf("Do you like pizza? (y/n) \n");
	scanf( "%c", &answer);

	if ((answer == 'y') || (answer == 'n')) {
		if (answer == 'y') {
			printf("You got a great taste my dude!");
		}
		else {
			printf("You don't deserve to live. *gunshot*");
		}
	}
	else {
		printf("You can't read or you can't type?");
	}

	getch();
	return 0;
}