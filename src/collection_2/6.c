#include <stdio.h>

int high2num (int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

main(void) {
	int a, b;
	printf("Insert a number");
	scanf("%d", &a);
	printf("Insert a number");
	scanf("%d", &b);
	printf("%d", high2num(a, b));
}
