#include <stdio.h>
#include <locale.h>

int maior2num (int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

main () {
	int a, b;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza um número");
	scanf("%d", &a);
	printf("Introduza um número");
	scanf("%d", &b);
	printf("%d", maior2num(a, b));
}
