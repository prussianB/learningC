#include <stdlib.h>
#include <stdio.h>

int main() {

	FILE * fPizza2;
	
	fPizza2 = fopen("Pizza2.txt", "r");
	
	char Line[150];
	while (!feof(fPizza2)) {
		fgets(Line, 150, fPizza2);
		puts(Line);
	}

	fclose(fPizza2);


	getch();
	return 0;
}