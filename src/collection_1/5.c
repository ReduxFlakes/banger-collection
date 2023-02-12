#include <stdio.h>

main(void) {
	float dist, comb, cons;
	printf("Introduza a distancia");
	scanf("%f", &dist);
	printf("Introduza o combustivel");
	scanf("%f", &comb);
	cons = (comb/dist)*100;
	printf("O consumo e de: %f", cons);
}
