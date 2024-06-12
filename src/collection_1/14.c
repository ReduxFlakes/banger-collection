#include <stdio.h>

main(void) {
	int input;
	printf("Insert a number of a month (1 - 12)");
	scanf("%d", &input);
	/* if else hell
	switch(input) {
		case: 1
			printf("January");
			break;
		...
	}*/
	if (input == 1) 
		printf("Januray");
	else if (input == 2)
		printf("February");
	else if (input == 3)
		printf("March");
	else if (input == 4)
		printf("April");
	else if (input == 5)
		printf("May");
	else if (input == 6)
		printf("June");
	else if (input == 7)
		printf("July");
	else if (input == 8)
		printf("Agust");
	else if (input == 9)
		printf("September");
	else if (input == 10)
		printf("October");
	else if (input == 11)
		printf("November");
	else if (input == 12)
		printf("December");
}
