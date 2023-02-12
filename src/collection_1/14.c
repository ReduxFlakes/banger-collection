#include <stdio.h>

main(void) {
	int input;
	printf("Introduza o numero de um mes ");
	scanf("%d", &input);
	// if else hell
	if (input == 1) 
		printf("Janeiro");
	else if (input == 2)
		printf("Fevereiro");
	else if (input == 3)
		printf("Marco");
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
}
