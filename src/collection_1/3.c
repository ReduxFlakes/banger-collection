#include <stdio.h>

main(void) {
	int a, b;
	float soma, media;
	printf("Introduza dois numeros");
	scanf("%d", &a);
	scanf("%d", &b);
	soma = a+b;
	media = soma/2;
	printf("A media e: %f", media);
}
