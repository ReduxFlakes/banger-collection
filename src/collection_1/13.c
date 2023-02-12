#include <stdio.h>

main(void) {
	char letter;
	printf("Introduza uma letra");
	scanf("%c", letter);
	if (letter = "a" || "e" || "i" || "o" || "u") {
		printf("%c e uma vogal", letter);
	} else {
		printf("%c e uma consoante", letter);
	} 
}
