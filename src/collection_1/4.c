#include <stdio.h>

main(void) {
	float cel, fah;
	printf("Introduza os graus Celsius");
	scanf("%f", &cel);
	fah = (9*cel+160)/5;
	printf("A conversao e: %f", fah);
}
