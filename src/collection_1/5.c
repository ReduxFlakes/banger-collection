#include <stdio.h>

main(void) {
	float dist, fuel, cons;
	printf("Distance");
	scanf("%f", &dist);
	printf("Fuel");
	scanf("%f", &fuel);
	cons = (fuel/dist)*100;
	printf("The consumption is of: %f", cons);
}
