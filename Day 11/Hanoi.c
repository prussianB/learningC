#include <stdio.h>
#include <stdlib.h>

void hanoi(int n,char ini,char temp,char final){
	if (n == 1){
		printf("%c to %c\n", ini, final);
	}
	else {
		printf("hanoi(%d,%c,%c,%c);\n\n", n - 1, ini, final, temp);
		hanoi(n - 1, ini, final, temp);
		printf("%c to %c\n", ini, final);
		
		printf("hanoi(%d,%c,%c,%c);\n\n", n - 1, temp, ini, final);
		hanoi(n - 1, temp, ini, final);

	}
}
int main() {
	
	hanoi(3, 'A', 'B', 'C');





	getch();
	return 0;
}