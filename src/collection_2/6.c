#include <stdio.h>

int maior2num (int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

main(void) {
	int a, b;
	printf("Introduza um n�mero");
	scanf("%d", &a);
	printf("Introduza um n�mero");
	scanf("%d", &b);
	printf("%d", maior2num(a, b));
}
