#include <stdlib.h>
#include <stdio.h>

void convertToDollars(float euro);

int main() {

	float euroPrice = 9.90;
	convertToDollars(euroPrice);

	getch();
	return 0;
}

void convertToDollars(float euro) {
	float usd = euro*1.37;
	printf("%.2f Euros - %.2f USD \n", euro, usd);
	return;


}