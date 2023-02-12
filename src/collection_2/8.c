#include <stdio.h>

void mult(int x) {
	int i=1;
	while(i<=3) {
		if(i * x) 
   			printf("%d * %d = %d\n", x, i, x*i);
   		i++;
	}
}

main(void) {
	int x, res;
	printf("Introduza um numero");
	scanf("%d", &x);
	mult(x);
}
