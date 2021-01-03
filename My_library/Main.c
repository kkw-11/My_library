#include <stdio.h>
#include "MyLibrary.h"


int main() {
	int res = 0;

	int list[10] = { 100, 23, 25, 35, 42, 51, 56, 65, 70, 89 };

	Sort(list, 10);

	for (int i = 0; i < 10; ++i) {
		printf("%d, ", list[i]);
	}

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
