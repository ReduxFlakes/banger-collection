#include <stdio.h>
#include <math.h>

main(void) {
	float cat1, cat2, res;
	printf("Introduza o cateto");
	scanf("%f %f", &cat1, &cat2);
	res = sqrt(pow(cat1, 2) + pow(cat2, 2));
	printf("%f", res);
}
