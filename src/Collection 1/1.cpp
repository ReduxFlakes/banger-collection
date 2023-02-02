#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	printf("Introduza um número");
	scanf("%d", &a);
	printf("Introduza um número");
	scanf("%d", &b);
	printf("Introduza um número");
	scanf("%d", &c);
	printf("%d + %d * %d = %d\n", a, b, c, a+b*c);
	printf("%d + %d * %d = %d\n", a, b, c, a+b/c);
	printf("%d % %d * %d = %d\n", a, b, c, a%b*c);
	printf("%d + 1 * %d = %d\n", a, b, a+1+c);
	printf("%d^3 + 2 * %d - %d = %d\n", a, b, c, a^3+2*b-c);
	system("pause");
	return 0;
}
