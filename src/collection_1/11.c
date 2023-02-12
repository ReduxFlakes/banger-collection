#include <stdio.h>

main(void) {
	int counter, num;
	while (counter <= 40) {
		if(counter%2==0) 
		printf("%d\n", counter);
//		num = counter % 2;
//		printf("%d\n", counter);
		counter++;
	}
}
