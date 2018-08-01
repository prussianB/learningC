#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

FILE * fDataR;
FILE * fDataW;

void initialize(){

	fDataR = fopen("monitorData.txt", "r");
	fDataW = fopen("writeData.txt", "w");
	return;
}

void close(){
	fclose(fDataR);
	fclose(fDataW);
	return;
}

int read(){
	if (feof(fDataR)) {
		return -1;
	}

	//fgets string. Gelen �nce ! kontrol et. String compare,   2 islem string to int
	char val[10];
	fgets(val, 10, fDataR);
	if (strcmp(val, "!\n") == 0 || strcmp(val, "!") == 0) {
		return -2;
	}
	return atoi(val);
}

//Dosya biterse -1 d�n.
// ! gelirse -2 d�n.

void write(int val1, int val2){
	fprintf(fDataW, "%d,%d\n", val1, val2);

	// 256;512
	// 128;256

}


int main(){
	int val;
	initialize();
	while (true) {
		val = read();
		if (val == -1){
			break;
		}
		if (val == -2){
			continue;
		}
		write(val, val*2);
	}
	close();
	return 0;
}
