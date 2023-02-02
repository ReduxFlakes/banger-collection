#include <stdio.h>
#include <locale.h>

int main() {
	float dist, comb, cons;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza a distância");
	scanf("%f", &dist);
	printf("Introduza o combustível");
	scanf("%f", &comb);
	cons = (comb/dist)*100;
	printf("O consumo é de: %f", cons);
	return 0;
}
