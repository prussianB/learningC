#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int fib(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);


}

unsigned long long fib2(int n) {
	unsigned long long A[1000];
	int i;

	A[0] = 1;
	A[1] = 1;

	for (i = 2; i <= n; i++) {
		A[i] = A[i - 1] + A[i - 2];

	}
	return A[n];


}

int main(){

	int n;
	scanf("%d", &n);
	printf("fib(%d) = %u\n", n, fib2(n));
	sin
	getch();



	return 0;
}