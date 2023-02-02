#include <stdio.h>
#include <locale.h>

int main() {
	float cel, fah;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza os graus Celsius");
	scanf("%f", &cel);
	fah = (9*cel+160)/5;
	printf("A conversão é: %f", fah);
	return 0;
}
