#include <stdio.h>

int a=0;

void f1 (int d) {
	int x;
	x=a+3;
	a=d+x;
}

int main () {
	int z=5;
	printf("%d\n", a);
	f1(z);
	printf("%d\n", a);
	printf("%d\n", z);
	return 0;
}
