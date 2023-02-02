#include <stdio.h>
#include <locale.h>

void mult(int x) {
	int i=1;
	while(i<=3) {
		if(i * x) 
   			printf("%d * %d = %d\n", x, i, x*i);
   		i++;
	}
}

int main() {
	int x, res;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza um número");
	scanf("%d", &x);
	mult(x);
	return 0;
}
