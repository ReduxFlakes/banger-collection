#include <stdio.h>
#include <locale.h>

int main () {
	int a, b;
	float soma, media;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza dois números");
	scanf("%d", &a);
	scanf("%d", &b);
	soma = a+b;
	media = soma/2;
	printf("A média é: %f", media);
	return 0;
}
