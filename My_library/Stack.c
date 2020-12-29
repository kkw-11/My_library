#include <stdio.h>

#define MAX_N 100

int top;
int stack[MAX_N];

void stackInit(void)
{
    top = 0;
}

int stackIsEmpty(void)
{
    return (top == 0);
}

int stackIsFull(void)
{
    return (top == MAX_N);
}

int stackPush(int value)
{
    if (stackIsFull())
    {
        printf("Stack overflow!\n");
        return 0;
    }
    stack[top] = value;
    top++;

    return 1;
}

int stackPop(int* value)
{
    if (stackIsEmpty())
    {
        printf("Stack is empty!\n");
        return 0;
    }
    top--;
    *value = stack[top];

    return 1;
}