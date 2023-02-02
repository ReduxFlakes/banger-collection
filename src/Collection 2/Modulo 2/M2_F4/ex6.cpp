#include <stdio.h>
#include <locale.h>

main() {
	int input;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza o número de um mês ");
	scanf("%d", &input);
	if (input == 1) 
		printf("Janeiro");
	else if (input == 2)
		printf("Fevereiro");
	else if (input == 3)
		printf("Março");
	else if (input == 4)
		printf("Abril");
	else if (input == 5)
		printf("Maio");
	else if (input == 6)
		printf("Junho");
	else if (input == 7)
		printf("Julho");
	else if (input == 8)
		printf("Agosto");
	else if (input == 9)
		printf("Setembro");
	else if (input == 10)
		printf("Outubro");
	else if (input == 11)
		printf("Novembro");
	else if (input == 12)
		printf("Dezembro");
	return 0;
}
