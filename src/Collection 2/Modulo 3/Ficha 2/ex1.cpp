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
		
		printf("Introduza o primeiro n�mero: ");
		scanf("%f", &n1);
		printf("Introduza o segundo n�mero: ");
		scanf("%f", &n2);
		
		printf("\n\nIntroduza o n�mero da opera��o que quer fazer: \n\n");
		
		printf("[1] - Soma\n");
		printf("[2] - Subtra��o\n");
		printf("[3] - Divis�o\n");
		printf("[4] - Multiplica��o\n\n");
		printf("[9] - Fechar loop\n\n");
	
		printf("Op��o: ");
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
