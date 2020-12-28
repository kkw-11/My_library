#include <stdio.h>
#include "MyLibrary.h"


void PrintString(char* pstr) {
		printf("%s\n", pstr);
		for (int i = 0; pstr[i]; ++i)
			printf("%c:%d\n",pstr[i],pstr[i]);
}

int main() {

	int arr[5] = {10,20,30,40};
	int arrSize = sizeof(arr) / sizeof(int);

	
	char* str = "ABCDEEEEEEEEEEEEEE";

	PrintString(str);


	
}