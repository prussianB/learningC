#include <stdlib.h>
#include <stdio.h>

void passByValue(int i);
void passByAdress(int *i);

int main() {

	int pizza = 1;

	passByValue(pizza);
	printf("Passed by value, pizza is %d\n", pizza);

	passByAdress(&pizza);
	printf("Passed by address, pizza is %d\n", pizza);

	getch();
	return 0;
}

void passByValue(int i) {
	i = 310;
	return;
}

void passByAdress(int *i) {
	*i = 690;
	return;
}