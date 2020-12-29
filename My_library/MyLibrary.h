#pragma once
void Swap(int* lhs, int* rhs);

int TotalInteger(int l, int r);

void PrintArray(int parr[], int size); //void PrintArray(int* parr, int size);

void PrintString(char* pstr);

//Stack function
void stackInit(void);

int stackIsEmpty(void);

int stackIsFull(void);

int stackPush(int value);

int stackPop(int* value);
//