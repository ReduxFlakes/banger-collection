#include <stdio.h>

void impar(int n) {
	if (n%2==0)
		printf("Par");
	else
		printf("Impar");
}

main(void) {
	int n;
	printf("Introduza um numero");
	scanf("%d", &n);
	impar(n);
}

