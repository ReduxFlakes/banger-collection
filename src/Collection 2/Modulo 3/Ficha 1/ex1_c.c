#include <stdio.h>
#include <locale.h>

void impar(int n) {
	if (n%2==0)
		printf("Par");
	else
		printf("Impar");
}

main () {
	int n;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza um número");
	scanf("%d", &n);
	impar(n);
}

