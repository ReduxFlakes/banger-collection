#include <stdio.h>
#include <locale.h>

main() {
	int input;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza um n�mero ");
	scanf("%d", &input);
	if (input > 0) {
		printf("O n�mero %d � positivo\n", input);
		if (input > 20)
			printf("O n�mero %d � maior que 20", input);
		else
			printf("O n�mero %d � menor que 20", input);
	} else {
		printf("O n�mero � negativo");
	}	
	return 0;
}
