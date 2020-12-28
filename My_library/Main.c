#include <stdio.h>
#include "MyLibrary.h"

int main() {

	int a = 10;
	int b = 20;
	int result = 0;

	printf("a: %d, b: %d\n", a, b);
	printf("----------------\n");

	result = TotalInteger(a, b);
	printf("result : %d\n", result);
	
	Swap(&a, &b);
	
	printf("a: %d, b: %d\n", a, b);
	printf("----------------\n");

	result = TotalInteger(a, b);		
	printf("result : %d\n", result);
}