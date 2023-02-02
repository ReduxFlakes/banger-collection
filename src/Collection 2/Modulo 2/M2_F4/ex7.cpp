#include <stdio.h>
#include <locale.h>

main() {
	int input;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza um número ");
	scanf("%d", &input);
	if (input > 0) {
		printf("O número %d é positivo\n", input);
		if (input > 20)
			printf("O número %d é maior que 20", input);
		else
			printf("O número %d é menor que 20", input);
	} else {
		printf("O número é negativo");
	}	
	return 0;
}
