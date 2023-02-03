#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
void addElm(int);
void Display();
int top = -1;
int stack[SIZE];
void addElm(int num)
{
    if(top==50){
        printf("Stack Is Full");
    }else{
        stack[++top] = num;
    }
}
void Display()
{
    printf("-----\n");
    for (int i = top; i >= 0; i--)
    {
        printf("| %d |\n", stack[i]);
        printf("-----\n");
    }
}
int main()
{
    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        int in;
        int elm;
        scanf("%d", &in);
        switch (in)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &elm);
            addElm(elm);
            break;
        case 2:
            if (top <= -1)
            {
                printf("Stack is empty \n");
            }
            else
            {
                printf("-----\n");
                printf("| %d |  is Popped\n", stack[top--]);
                printf("-----\n");
            }
            break;
        case 3:
            if (top <= -1)
            {
                printf("Stack is empty \n");
            }
            else
            {
                printf("-----\n");
                printf("| %d |\n", stack[top]);
                printf("-----\n");
            }
            break;
        case 4:
            Display();
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    }
}