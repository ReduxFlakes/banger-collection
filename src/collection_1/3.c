#include <stdio.h>

main(void) {
	int a, b;
	float sum, avg;
	printf("Insert two numbers");
	scanf("%d", &a);
	scanf("%d", &b);
	sum = a+b;
	avg = sum/2;
	printf("The average is: %f", avg);
}
