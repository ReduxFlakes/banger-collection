#include <stdio.h>

int a, b;

void le2num() {
	printf("Introduza um numero");
	scanf("%d", &a);
	printf("Introduza um numero");
	scanf("%d", &b);
}

main(void) {
	le2num();
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
