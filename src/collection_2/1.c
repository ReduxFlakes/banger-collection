#include <stdio.h>

main(void) {
	int input1, input2, input3, box1, box2;
	printf("Introduza um numero inteiro");
	scanf("%d", &input1);
	printf("Introduza um numero inteiro");
	scanf("%d", &input2);
	printf("Introduza um numero inteiro");
	scanf("%d", &input3);
	// check for the lower number
	if (input1 < input2 && input1 < input3)
		box1 = input1;
	else if (input2 < input1 && input2 < input3)
		box1 = input2;
	else if (input3 < input1 && input3 < input2)
		box1 = input3;
	//	check for the higher number
	if (input1 > input2 && input1 > input3)
		box2 = input1;
	else if (input2 > input1 && input2 > input3)
		box2 = input2;
	else if (input3 > input1 && input3 > input2)
		box2 = input3;
	//	check for the number between box1 and box2
	if (input1 > box1 && input1 < box2)
		input1 = input1;
	else if (input2 > box1 && input2 < box2)
		input1 = input2;
	else if (input3 > box1 && input3 < box2)
		input1 = input3;
	printf("%d\n", box1);
	printf("%d\n", input1);
	printf("%d\n", box2);
}
