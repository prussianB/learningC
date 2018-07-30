#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main() {

	int rows, columns;

	for (rows = 1; rows <= 8; rows++) {		
		for (columns = 1; columns <= 10; columns++) {
			printf(" %d", columns);
		}

		printf("\n");
	}


	
	getch();
	return 0;
}