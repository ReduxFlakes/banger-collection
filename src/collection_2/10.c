#include <stdio.h>

int a, b;

void read2num() {
	printf("Insert a num");
	scanf("%d", &a);
	printf("Insert a num");
	scanf("%d", &b);
}

main(void) {
	read2num();
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
