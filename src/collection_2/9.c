#include <stdio.h>

void outputNum(int n, int m) {
	while(n<=m) {
		printf("%d\n", n);
		n++;
	}
}

main(void) {
	int n, m;
	printf("Insert a start value");
	scanf("%d", &n);
	printf("insert an end value");
	scanf("%d", &m);
	outputNum(n,m);
}
