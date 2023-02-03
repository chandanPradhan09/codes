#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void createNode();
void display();
struct node *start = NULL;
void createNode()
{
    int n=0;
    printf("How many node you want to create: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        int a;
        printf("Enter data for %d node: ", i+1);
        scanf("%d", &a);
        temp->data = a;
        temp->link = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            struct node *ptr = start;
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
}


void display(){
    printf("Link List : ");
    if (start==NULL)
    {
        printf("Node is Empty!");
    }
    else
    {
        struct node *ptr=start;
        while (ptr->link!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
        printf("%d ",ptr->data);
        
    }
}

int main()
{
    createNode();
    display();
    return 0;
}