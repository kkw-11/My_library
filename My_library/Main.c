#include <stdio.h>
#include "MyLibrary.h"

int main() {

	int a = 10;
	int b = 20;

	printf("a: %d, b: %d\n", a, b);
	Swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);

	printf("%d\n",TotalInteger(1, 100));
	
}