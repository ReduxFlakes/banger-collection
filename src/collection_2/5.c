#include <stdio.h>

int a, b, sum=0, i, low, high;

void getData() {
	printf("Insert a number");
	scanf("%d", &a);
	printf("Insert a number");
	scanf("%d", &b);
}

void getHigherLower() {
	if(a < b) {
		low=a;
		high=b;
	} else {
		low=b;
		high=a;
	}
}

int sumPair() {
	for(i=low;i<=high;i++)
		if(i%2==0)
			sum=sum+i;
}

int result() {
	printf("sum = %d", sum);
}

main(void) {
	int low, high;
	getData();
	getHigherLower();
	sumPair();
	result();
}
