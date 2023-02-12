#include <stdio.h>

main(void) {
	int n1, n2, n3, counter;
	char aluno1[20], aluno2[20], aluno3[20];
	printf("Introduza o nome e a nota\n");
	scanf("%s", &aluno1);
	scanf("%d", &n1);
	printf("Introduza o nome e a nota\n");
	scanf("%s", &aluno2);
	scanf("%d", &n2);
	printf("Introduza o nome e a nota\n");
	scanf("%s", &aluno3);
	scanf("%d", &n3);
	printf("ALUNO(A)\tNOTA\n");
	printf("########\t####\n");
	printf("%s\t\t%d\n", aluno1, n1);
	printf("%s\t\t%d\n", aluno2, n2);
	printf("%s\t\t%d\n", aluno3, n3);
}
