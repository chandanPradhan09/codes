#include <stdio.h>
#include <stdlib.h>
void insertToStack(int elm);
void Display();
void Pop();
void Peek();
int main();
struct Stack
{
    int data;
    struct Stack *next;
};
struct Stack *top = NULL;

void insertToStack(int elm)
{
        struct Stack *newNode = (struct Stack *)malloc(sizeof(struct Stack));
        newNode->data = elm;
        newNode->next = top;
        top = newNode;
}
void Display()
{
    if (top==NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        struct Stack *temp = top;
        while (temp != NULL)
        {
            printf("-----\n");
            printf("| %d |\n", temp->data);
            printf("-----\n");
            temp = temp->next;
        }
    }
}
void Pop()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        struct Stack *temp = top;
        printf("-----\n");
        printf("| %d |  is Popped\n", top->data);
        printf("-----\n");
        top = top->next;
        free(temp);
    }
}
void Peek()
{
    printf("-----\n");
    printf("| %d |  is Top Element\n", top->data);
    printf("-----\n");
}
int main()
{
    // For First Data Input
    int elm;
    printf("Enter element: ");
    scanf("%d", &elm);
    struct Stack *newNode = (struct Stack *)malloc(sizeof(struct Stack));
    newNode->data = elm;
    newNode->next = NULL;
    top = newNode;
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
            if (top == NULL)
            {
                main(); // if top is NULL after pop operation call main()
            }
            else
            {
                printf("Enter element: ");
                scanf("%d", &elm);
                insertToStack(elm);
            }
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
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