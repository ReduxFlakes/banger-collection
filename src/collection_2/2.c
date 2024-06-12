#include <stdio.h>

float height_sum (float alt, float bs) {
	float area=0;
	area=bs*alt/2;
	return area;
}

main() {
	float height, base, sum;
	printf("Insert the height");
	scanf("%f", &height);
	printf("Insert the base");
	scanf("%f", &base);
	sum=height_sum(height, base);
	printf("The value is %f", sum);
}
