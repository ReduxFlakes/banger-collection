#include <stdio.h>
main () {
int dia;
	do {
		printf("Introduza um dia da semana?\n1-Domingo \n2-Segunda\n3-Ter�a\n4-Quarta\n5-Quinta\n6-Sexta\n7-S�bado\n");
		scanf("%d", &dia); }
	while (dia<1 || dia>7);
	switch (dia) {
		case 1: printf("\nDomingo"); break;
		case 2: printf("\nSegunda"); break;
		case 3: printf("\nTer�a"); break;
		case 4: printf("\nQuarta"); break;
		case 5: printf("\nQuinta"); break;
		case 6: printf("\nSexta"); break;
		case 7: printf("\nS�bado"); break;
		default: printf ("Dia errado"); break;
	}
	return 0;
}
