#include <stdio.h>
#include <locale.h>

int main() {
	float dist, comb, cons;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza a dist�ncia");
	scanf("%f", &dist);
	printf("Introduza o combust�vel");
	scanf("%f", &comb);
	cons = (comb/dist)*100;
	printf("O consumo � de: %f", cons);
	return 0;
}
