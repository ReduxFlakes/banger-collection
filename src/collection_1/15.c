#include <stdio.h>

main(void) {
	int input;
	printf("Insert a number");
	scanf("%d", &input);
	if (input > 0) {
		printf("The number %d is positive\n", input);
		if (input > 20)
			printf("The number %d is higher than 20", input);
		else
			printf("The number %d is lower than 20", input);
	} else {
		printf("The number is negative");
	}	
}
