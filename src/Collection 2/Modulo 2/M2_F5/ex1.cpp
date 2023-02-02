#include <stdio.h>
#include <locale.h>

main() {
	int counter=1, married=0;
	char civil;
	setlocale(LC_ALL, "Portuguese");
	while (counter <= 15) {
		printf("Introduza o seu estado civil");
		scanf(" %c", &civil);
		if (civil == 'c') {
			++married;
		}
		++counter;
	}
	printf("A quantidade de pessoas casadas é de %d", married);
	return 0;
}
