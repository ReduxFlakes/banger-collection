#include <stdio.h>


main(void) {
	int counter=1, married=0;
	char civil;
	while (counter <= 15) {
		printf("Insert your civil state");
		scanf(" %c", &civil);
		if (civil == 'c') {
			++married;
		}
		++counter;
	}
	printf("The quantity of married people is of %d", married);
}
