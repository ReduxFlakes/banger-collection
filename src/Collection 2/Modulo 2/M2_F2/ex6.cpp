#include <stdio.h>
#include <locale.h>

int main () {
	int a, b;
	float soma, media;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza dois n�meros");
	scanf("%d", &a);
	scanf("%d", &b);
	soma = a+b;
	media = soma/2;
	printf("A m�dia �: %f", media);
	return 0;
}
