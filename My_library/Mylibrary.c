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