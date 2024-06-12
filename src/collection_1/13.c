#include <stdio.h>

main(void) {
	char letter;
	printf("Insert a letter");
	scanf("%c", letter);
	if (letter = "a" || "e" || "i" || "o" || "u") {
		printf("%c is a vowel", letter);
	} else {
		printf("%c is a consonant", letter);
	} 
}
