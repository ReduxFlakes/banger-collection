#include <stdio.h>

main(void) {
	int n1, n2, n3, counter;
	char student1[20], student2[20], student3[20];
	printf("Insert a name and a grade\n");
	scanf("%s", &student1);
	scanf("%d", &n1);
	printf("Insert a name and a grade\n");
	scanf("%s", &student2);
	scanf("%d", &n2);
	printf("Insert a name and a grade\n");
	scanf("%s", &student3);
	scanf("%d", &n3);
	printf("Student(A)\tGrade\n");
	printf("########\t####\n");
	printf("%s\t\t%d\n", student1, n1);
	printf("%s\t\t%d\n", student2, n2);
	printf("%s\t\t%d\n", student3, n3);
}
