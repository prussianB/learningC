#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

FILE * fData;
int val;
int val1, val2;

void initialize(){
	
	fData = fopen("monitorData.txt", "r");
	return;
}

void close(){
	fclose(fData);
	return;
}

int read(){
	//fgets string. Gelen önce ! kontrol et. String compare,   2 islem string to int
	fgets(val1, 5, fData);
	if (val1 == '!') {
		val = -2;
	}
	return val;
}

	//Dosya biterse -1 dön.
	// ! gelirse -2 dön.

void write(int val1, int val2 ){
	val2 = val1 * 2;
	printf("%d;%d\n", val1, val2);
	return;

	// 256;512
	// 128;256

}





int main(){
	initialize();
	while (!feof(fData)) {
		read();
		if (val == -2){
			continue;
		}
		write(val1, val2);
	}
	close();
	return 0;
}