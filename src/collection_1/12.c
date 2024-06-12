#include <stdio.h>

main(void) {
	float n1, n2, avg;
	char student[20];
	printf("Insert the name of the student/s\n");
	scanf("%s", student);
	printf("Insert the first note of %s\n", student);
	scanf("%f", &n1);
	printf("Insert the second note of %s\n", student);
	scanf("%f", &n2);
	avg = (n1+n2)/2;
	if (avg >= 0 && avg <= 4,9) {
		printf("%s sudent/s in recuperation", student);
	} else if (avg >= 5 && avg <= 6,9) {
		printf("%s student/s that can realize the final exam", student);
	} else if (avg >= 7 && avg <= 10) {
		printf("%s student/s that have passed without final exam", student);
	}
}
