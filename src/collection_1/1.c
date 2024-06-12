#include <stdio.h>
#include <stdlib.h>

main(void) {
	int a, b, c;
	printf("Insert a number");
	scanf("%d", &a);
	printf("Insert a number");
	scanf("%d", &b);
	printf("Insert a number");
	scanf("%d", &c);
	printf("%d + %d * %d = %d\n", a, b, c, a+b*c);
	printf("%d + %d * %d = %d\n", a, b, c, a+b/c);
	printf("%d % %d * %d = %d\n", a, b, c, a%b*c);
	printf("%d + 1 * %d = %d\n", a, b, a+1+c);
	printf("%d^3 + 2 * %d - %d = %d\n", a, b, c, a^3+2*b-c);
	system("pause");
}
