#include <stdio.h>

main(void) {
	float cel, fah;
	printf("Insert temperature in Cº");
	scanf("%f", &cel);
	fah = (9*cel+160)/5;
	printf("The conversion is: %f", fah);
}
