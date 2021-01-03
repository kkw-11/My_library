#include <stdio.h>
#include "MyLibrary.h"
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

int main() {
	int res = 0;

	res = cntDivisor(3);
	printf("%d", res);


}


//#include <stdio.h>
//#include "MyLibrary.h"
//
//int main() {
//	FILE* fsp;
//	int fileCon;
//	int input = 0;
//	fopen_s(&fsp, "fileIO.txt", "w");//w,r
//	if (fsp != NULL) {
//		printf("Success file open\n");
//
//		puts("input data");
//		while (input != EOF) {
//			input = fgetc(stdin);
//			fputc(input, fsp);
//		}
//	}
//	else {
//		printf("Can not open file\n");
//	}
//
//	fileCon = fclose(fsp); //EOF => -1
//
//	if (fileCon != EOF) {
//		printf("Success file close\n");
//	}
//	else {
//		printf("Can not close file\n");
//	}
//
//}


//#include <stdio.h>
//#include "MyLibrary.h"
//
//int main() {
//	FILE* fsp;
//	int fileCon;
//
//	fopen_s(&fsp, "fileIO.txt", "w");//w,r
//	if (fsp != NULL) {
//		printf("Success file open\n");
//	}
//	else {
//		printf("Can not open file\n");
//	}
//
//	fileCon = fclose(fsp); //EOF => -1
//
//	if (fileCon != EOF) {
//		printf("Success file close\n");
//	}
//	else {
//		printf("Can not close file\n");
//	}
//
//}

//#include <stdio.h>
//#include "MyLibrary.h"
//
//int main() {
//	printf("total:%d",TotalInteger(3,1));
//	
//
//
//}
//#include <stdio.h>
//#include "MyLibrary.h"
//
//int main() {
//
//
//	stackInit();
//
//	stackPush(3);
//	stackPush(4);
//	stackPush(5);
//
//	int value;
//	stackPop(&value);
//	printf("%d", value);
//
