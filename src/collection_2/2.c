#include <stdio.h>

float altura_soma (float alt, float bs) {
	float area=0;
	area=bs*alt/2;
	return area;
}

main() {
	float altura, base, soma;
	printf("Introduza a altura");
	scanf("%f", &altura);
	printf("Introduza a base");
	scanf("%f", &base);
	soma=altura_soma(altura, base);
	printf("O valor e %f", soma);
}
