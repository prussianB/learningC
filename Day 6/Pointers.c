#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main() {

	int baran = 31;
	printf("Address\t Name\t Value\n");

	int *pBaran = &baran;
	printf("%p %s\t %d\n", pBaran, "baran", baran);




	getch();
	return 0;
}