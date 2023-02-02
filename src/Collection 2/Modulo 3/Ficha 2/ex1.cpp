#include <stdio.h>
#include <locale.h>

float n1, n2;

float soma() {
	
}

int main() {
	int input_menu=0, counter=0;
	setlocale(LC_ALL, "Portuguese");
	
	for(counter=0;counter<=0;) {
		printf("Bem-vindo(a)\n\n");
		
		printf("Introduza o primeiro número: ");
		scanf("%f", &n1);
		printf("Introduza o segundo número: ");
		scanf("%f", &n2);
		
		printf("\n\nIntroduza o número da operação que quer fazer: \n\n");
		
		printf("[1] - Soma\n");
		printf("[2] - Subtração\n");
		printf("[3] - Divisão\n");
		printf("[4] - Multiplicação\n\n");
		printf("[9] - Fechar loop\n\n");
	
		printf("Opção: ");
		scanf("%d", &input_menu);
//		if(input_menu = 1)
//		
//		if(input_menu = 2)
//	
//		if(input_menu = 3)
//	
		if(input_menu = 4)
			counter=0;
		if(input_menu = 9)
			counter=1;
	}

	return 0;
}
