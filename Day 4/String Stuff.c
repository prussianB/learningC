#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main() {

	char name[] = { "BARAN" };
	printf("%s\n", name);

	strcpy(name, "CETIN");
	printf("%s\n", name);

	char letter = name[0];
	printf("%c\n", letter);

	name[0] = 'K';
	printf("%c\n", name[0]);

	printf("%s\n", name);


	getch();
	return 0;
}
