#include <stdio.h>
#include <locale.h>

int a, b;

void le2num() {
	printf("Introduza um n�mero");
	scanf("%d", &a);
	printf("Introduza um n�mero");
	scanf("%d", &b);
}

main() {
	setlocale(LC_ALL, "Portuguese");
	le2num();
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
