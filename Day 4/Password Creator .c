#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <Windows.h>


int main() {

	char pass[10];
	while (1){
		printf("Create your password.\n");
		Sleep(1000);
		printf("your password should be  no more than 10 characters long,\nshould include an uppercase letter, a lowercase letter and a $ sign.\n");
		Sleep(1000);
		printf("Cuz we're rich and don't want poor bastards to enter.\n");

		scanf(" %s", pass);

		int i = 0;
		int low = 0;
		int high = 0;
		int dollar = 0;

		while (i < 8) {
			if (isupper(pass[i])) {
				high = 1;
				i = 0;
				break;
			}
			i++;
		}

		while (i < 8) {
			if (islower(pass[i])) {
				low = 1;
				i = 0;
				break;
			}
			i++;
		}

		while (i < 8) {
			if (pass[i] == '$')  {
				dollar = 1;
				i = 0;
				break;
			}
			i++;
		}

		if ((low == 1) && (high == 1) && (dollar == 1)) {
			printf("A strong password! Welcome to the club.\n");
			break;

		}
		else {
			printf("That's a weak password. Try again.\n\n");
		}
	}

	getch();
	return 0;
}
