#include <stdio.h>
#include "MyLibrary.h"

int main() {


	stackInit();

	stackPush(3);
	stackPush(4);
	stackPush(5);

	int value;
	stackPop(&value);
	printf("%d", value);

}