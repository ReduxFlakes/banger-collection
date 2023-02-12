#include <stdio.h>

int a=0;

void f1 (int d) {
	int x;
	x=a+3;
	a=d+x;
}

main(void) {
	int z=5;
	printf("%d\n", a);
	f1(z);
	printf("%d\n", a);
}
