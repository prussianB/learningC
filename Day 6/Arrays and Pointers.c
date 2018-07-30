#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main() {

	int i;
	int westWorld[5] = { 3, 31, 85, 112, 69 };

	printf("Element \t Address \t Value \n");

	for (i = 0; i < 5; i++) {

		printf("westWorld[%d] \t %p \t %d \n", i, &westWorld[i], westWorld[i]);

	}
	
	printf("\nwestworld[]\t  %p", westWorld);





	getch();
	return 0;

}