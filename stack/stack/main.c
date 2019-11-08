#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 10

int stack[MAX] = {0};
int top = 0;
int push(int value)
{

    if(top >= MAX)
    {
        return -1;
    }
    stack[top] = value;
    top++;

    showStack();
    return top;
}

int pop()
{
    if(top<= 0)
    {
        return -1;
    }

    top --;
    showStack();
    return stack[top];
}

void showStack()
{
    Sleep(500);
    system("CLS");
    int initialTop = top;
    for(int i = 0; i < initialTop; i ++)
    {
        printf("%d\n", stack[i]);
    }
}

void loading(int time)
{
    printf(".");
    Sleep(time);
    printf(" .");
    Sleep(time);
    printf(" .");
    Sleep(time);
}

void clear()
{
    loading(500);
    printf("clear");
    top = 0;
}

int main()
{
    push(12);
    push(32);
    push(40);
    pop();
     push(12);
    push(32);
    push(40);
     push(12);
    push(32);
    push(40);

    clear();
    push(1);
     push(12);
    push(32);
    push(40);

    return 0;
}
