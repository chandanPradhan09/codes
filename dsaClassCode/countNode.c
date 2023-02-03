#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void createNode();
void display();
void search();
void countnode();

struct node *start = NULL;
void createNode()
{
    int n = 0;
    printf("How many node you want to create: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        int a;
        printf("Enter data for %d node: ", i + 1);
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

void display()
{
    printf("Link List : ");
    if (start == NULL)
    {
        printf("Node is Empty!");
    }
    else
    {
        struct node *ptr = start;
        while (ptr->link != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("%d ", ptr->data);
    }
}

void search()
{
    int n;
    if (start == NULL)
    {
        printf("\nSearch : Your node is empty! NO RESULT FOUND");
    }
    else
    {
        printf("\nEnter no to search: ");
        scanf("%d", &n);
        struct node *ptr = start;
        int count = 1,true=0;
        while (ptr->link != NULL)
        {
            if (ptr->data == n)
            {
                printf("Data Found on node no %d\n", count);
                true++;
            }
            ptr = ptr->link;
            count++;
        }
        if (ptr->link == NULL)
        {
            ptr->data == n ? printf("Data Found on node no %d, ", count) : true==0?printf("Sorry no data Found!"):printf("Your data is fatched ENJOY!");
        }
    }
}

void countnode(){
    int count=1;
    if (start==NULL)
    {
        printf("Empty list!");
    }
    else
    {
        struct node *ptr=start;
        while (ptr->link!=NULL)
        {
            ptr=ptr->link;
            count++;
        }
        printf("Total Node is :%d",count);
    }
}


int main()
{
    
    createNode();
    display();
    search();
    int subcaseNo;
    switch (1)
    {
    case 1:
        printf("\nMENU for sub case:\n1. count of all nodes\n2. count upto special data node\n Enter your Choices: ");
        scanf("%d",&subcaseNo);
            switch (subcaseNo)
            {
            case 1:
                countnode();
                break;
            case 2:
                search();
                break;
            
            default:
                printf("Wrong input!");
                break;
            }

        break;
    
    default:
        printf("sorry");
        break;
    }
    return 0;
}