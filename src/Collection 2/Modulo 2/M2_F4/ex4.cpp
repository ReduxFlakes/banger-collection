#include <stdio.h>
#include <locale.h>

int main() {
	char letter;
	setlocale(LC_ALL, "Portuguese");
	printf("Introduza uma letra");
	scanf("%c", letter);
	if (letter = "a" || "e" || "i" || "o" || "u") {
		printf("%c � uma vogal", letter);
	} else {
		printf("%c � uma consoante", letter);
	} 
	return 0;
}
