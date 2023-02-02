#include <iostream.h>
#include <stdio.h>
#include <locale.h>

int main() {
	float n1, n2, media;
	setlocale(LC_ALL, "Portuguese");
	char aluno[20];
	printf("Introduza o nome do aluno(a)\n");
	scanf("%s", aluno);
	printf("Introduza a nota 1 do aluno(a) %s\n", aluno);
	scanf("%f", &n1);
	printf("Introduza a nota 2 do aluno(a) %s\n", aluno);
	scanf("%f", &n2);
	media = (n1+n2)/2;
	if (media >= 0 && media <= 4,9) {
		printf("Aluno(a) %s em recuperação", aluno);
	} else if (media >= 5 && media <= 6,9) {
		printf("Aluno(a) %s realiza prova final", aluno);
	} else if (media >= 7 && media <= 10) {
		printf("Aluno(a) %s aprovado sem prova final", aluno);
	}
}
