#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	float cat1, cat2, res;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza o cateto");
	scanf("%f %f", &cat1, &cat2);
	res = sqrt(pow(cat1, 2) + pow(cat2, 2));
	printf("%f", res);
	return 0;
}
