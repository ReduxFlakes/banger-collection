#include <stdio.h>


main(void) {
	int age;
	printf("Insert an age");
	scanf("%d", &age);
	if (age>=10 && age<=14) {
		printf("Infant");
	}
	else if (age>=15 && age<=17) {
		printf("Juvenile");
	}
	else if (age>=15 && age<=17) {
		printf("Adult");
	}
}
