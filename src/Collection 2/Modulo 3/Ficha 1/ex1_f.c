#include <stdio.h>
#include <locale.h>

int a, b;

void le2num() {
	printf("Introduza um número");
	scanf("%d", &a);
	printf("Introduza um número");
	scanf("%d", &b);
}

main() {
	setlocale(LC_ALL, "Portuguese");
	le2num();
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
