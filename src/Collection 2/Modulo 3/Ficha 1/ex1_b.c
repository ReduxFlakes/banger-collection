#include <stdio.h>
#include <locale.h>

int impar (int n) {
	if (n%2==0)
		return 1;
	else 
		return 0;
}

main () {
	int n;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza um número");
	scanf("%d", &n);
	printf("%d", impar(n));
}
