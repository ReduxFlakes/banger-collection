#include <stdio.h>
#include <locale.h>

int a, b, soma=0, i, menor, maior;

void obter_dados() {
	printf("Introduza um número");
	scanf("%d", &a);
	printf("Introduza um número");
	scanf("%d", &b);
}

void avaliar_menor_maior() {
	if(a < b) {
		menor=a;
		maior=b;
	} else {
		menor=b;
		maior=a;
	}
}

int soma_par() {
	for(i=menor;i<=maior;i++)
		if(i%2==0)
			soma=soma+i;
}

int resultado() {
	printf("Soma = %d", soma);
}

main () {
	int menor, maior;
	setlocale(LC_ALL, "Portuguese");
	obter_dados();
	avaliar_menor_maior();
	soma_par();
	resultado();
}
