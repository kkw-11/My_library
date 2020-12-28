#include<stdio.h>
void Swap(int* lhs, int* rhs) {
	int temp = 0;

	temp = *lhs;
	*lhs = *rhs;
	*rhs = temp;
}

int TotalInteger(int l, int r) {
	int sum = 0;
	for (int i = l; i <= r; ++i) {
		sum += i;
	}
	return sum;
}

void PrintArray(int parr[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("arr[%d]:%d\n", i, parr[i]);
	}
}

void PrintString(char* pstr) {
	printf("%s\n", pstr);

	for (int i = 0; pstr[i]; ++i)
		printf("%c:%d\n", pstr[i], pstr[i]);
}