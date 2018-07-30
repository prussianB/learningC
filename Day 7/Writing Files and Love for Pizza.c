#include <stdlib.h>
#include <stdio.h>

int main() {

	FILE * fPizza;
	
	fPizza = fopen("PizzaLove.txt", "w");
	fprintf(fPizza, "I love Pizza om nom delicious pizza pizza very gud.\n");
	fclose(fPizza);




	getch();
	return 0;
}