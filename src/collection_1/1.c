#include <stdio.h>
#include <stdlib.h>

main(void) {
	int a, b, c;
	printf("Introduza um numero");
	scanf("%d", &a);
	printf("Introduza um numero");
	scanf("%d", &b);
	printf("Introduza um numero");
	scanf("%d", &c);
	printf("%d + %d * %d = %d\n", a, b, c, a+b*c);
	printf("%d + %d * %d = %d\n", a, b, c, a+b/c);
	printf("%d % %d * %d = %d\n", a, b, c, a%b*c);
	printf("%d + 1 * %d = %d\n", a, b, a+1+c);
	printf("%d^3 + 2 * %d - %d = %d\n", a, b, c, a^3+2*b-c);
	system("pause");
}
