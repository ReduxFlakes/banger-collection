#include <stdio.h>
#include <locale.h>

void escrevenum(int n, int m) {
	while(n<=m) {
		printf("%d\n", n);
		n++;
	}
}

main() {
	int n, m;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza o príncipio do intervalo");
	scanf("%d", &n);
	printf("Introduza o fim do intervalo");
	scanf("%d", &m);
	escrevenum(n,m);
}
