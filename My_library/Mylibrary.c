#include<stdio.h>
void Swap(int* lhs, int* rhs) {
	int temp = 0;

	temp = *lhs;
	*lhs = *rhs;
	*rhs = temp;
}

int TotalInteger(int l, int r) {
	int sum = 0;

	if (l < r) {
		for (int i = l; i <= r; ++i) {
			sum += i;
		}
	}
	else if (l > r) {
		for (int i = r; i <= l; ++i) {
			sum += i;
		}
	}
	else {
		sum = l;
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

void bSearch(int arr[], int left, int right, int target) {
	int mid = (left + right) / 2;
	int index = 0;
	if (left > right) {
		index = -1;
		printf("target index:%d", index);
		return;
	}

	if (target > arr[mid]) {
		left = mid + 1;
		bSearch(arr, left, right, target);
	}
	else if (target < arr[mid]) {
		right = mid - 1;
		bSearch(arr, left, right, target);
	}
	else {
		index = mid;
		printf("target index:%d", index);
		return;
	}
}
//약수의 개수
int cntDivisor(int num) {
	int cnt = 0;
	int j = num;
	for (int i = 1; i < j; ++i) {
		if (num % i == 0) {
			j = num / i;
			cnt += 2;;
		}
	}
	return cnt;
}