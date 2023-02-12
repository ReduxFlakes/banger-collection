#include <stdio.h>

void escrevenum(int n, int m) {
	while(n<=m) {
		printf("%d\n", n);
		n++;
	}
}

main(void) {
	int n, m;
	printf("Introduza o principio do intervalo");
	scanf("%d", &n);
	printf("Introduza o fim do intervalo");
	scanf("%d", &m);
	escrevenum(n,m);
}
