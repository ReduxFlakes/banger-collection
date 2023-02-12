#include <stdio.h>

main(void) {
	int input;
	printf("Introduza um numero ");
	scanf("%d", &input);
	if (input > 0) {
		printf("O numero %d e positivo\n", input);
		if (input > 20)
			printf("O numero %d e maior que 20", input);
		else
			printf("O numero %d e menor que 20", input);
	} else {
		printf("O n�mero � negativo");
	}	
}
