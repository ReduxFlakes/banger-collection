#include <stdio.h>


main(void) {
	int counter=1, married=0;
	char civil;
	while (counter <= 15) {
		printf("Introduza o seu estado civil");
		scanf(" %c", &civil);
		if (civil == 'c') {
			++married;
		}
		++counter;
	}
	printf("A quantidade de pessoas casadas e de %d", married);
}
