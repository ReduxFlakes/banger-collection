#include <stdio.h>

void isEvenOdd(int n) {
	if (n%2==0)
		printf("Even");
	else
		printf("Odd");
}

main(void) {
	int n;
	printf("Insert a number");
	scanf("%d", &n);
	isEvenOdd(n);
}

