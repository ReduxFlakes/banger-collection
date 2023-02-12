#include <stdio.h>


main(void) {
	int age;
	printf("Introduza a idade");
	scanf("%d", &age);
	if (age>=10 && age<=14) {
		printf("Infantil");
	}
	else if (age>=15 && age<=17) {
		printf("Juvenil");
	}
	else if (age>=15 && age<=17) {
		printf("Adulto");
	}
}
