#include <stdlib.h>
#include <stdio.h>

float convert(float celcius);

int main() {

	float fahrenheit;
	float celcius;
	float i;
	float iCelcius;
	float fCelcius;
	int step;

	printf("Enter your initial celcius value:\n");
	scanf("%f", &iCelcius);
	printf("Enter your final celcius value:\n");
	scanf("%f", &fCelcius);
	printf("Enter your step value:\n");
	scanf("%d", &step);
	
	for (i = iCelcius; i <= fCelcius; i = i + step) {
		celcius = i;
		printf("%.2f C \t", celcius);
		fahrenheit = convert(celcius);
		printf("%.2f F \n", fahrenheit);
	}

	getch();
	return 0;
}

float convert(float celcius) {
	float fahrenheit = celcius * 1.8 + 32;


	return fahrenheit;



}