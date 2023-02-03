#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct dnode
{
    struct dnode *pri;
    int data;
    struct dnode *next;
};
// function declaretaion
void createNode();
void display();
void displayOfdouble();
void searchOfdouble();
void countOfdouble();
void search();
void countnode();
void insertAtBegining();
void insertAtBeginingdll();
void insertAtEnd();
void insertAtEnddll();
void insertAtAnyPoint();
void insertAtAnyPointdll();
void deleteAtBegining();
void deleteAtEnd();
void deleteAtAnypointdll();
void deleteAtBeginingdll();
void deleteAtEnddll();
void deleteAtAnyPoint();
void createdoubleNode();
struct node *singleNode();
struct dnode *doubleNode();
struct node *start = NULL;
struct dnode *head = NULL;
// starting of functions
// for one node
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
// for display the node
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
// for searching of data in node
void search()
{
    int n;
    if (start == NULL)
    {
        printf("\nSearch : Your node is empty! NO RESULT FOUND");
    }
    else
    {
        printf("\nEnter data to search: ");
        scanf("%d", &n);
        struct node *ptr = start;
        int count = 1, true = 0, a = 0;
        while (ptr->link != NULL)
        {
            if (ptr->data == n)
            {
                printf("Data Found on node no %d\n", count);
                true ++;
            }
            ptr = ptr->link;
            count++;
        }
        if (ptr->link == NULL)
        {
            ptr->data == n ? printf("Data Found on node no %d, ", count) : true == 0 ? printf("Sorry no data Found!")
                                                                                     : printf("Your data is fatched ENJOY!");
        }
    }
}
// for counting of node
void countnode()
{
    int count = 1;
    if (start == NULL)
    {
        printf("Empty list!");
    }
    else
    {
        struct node *ptr = start;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
            count++;
        }
        printf("Total Node is :%d", count);
    }
}
// for creating single node
struct node *singleNode()
{
    int a;
    struct node *first = NULL;
    struct node *firstNode = NULL;
    first = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of node: ");
    scanf("%d", &a);
    first->data = a;
    first->link = NULL;
    firstNode = first;
    return firstNode;
}
// for insert at the begining of node
void insertAtBegining()
{
    struct node *LLNode = NULL;
    LLNode = singleNode();
    if (start == NULL)
    {
        start = LLNode;
    }
    else
    {
        struct node *ptr = start;
        start = LLNode;
        start->link = ptr;
    }
}
// node insert at the end of node
void insertAtEnd()
{
    struct node *LLNode = NULL;
    LLNode = singleNode();
    if (start == NULL)
    {
        start = LLNode;
    }
    else
    {
        struct node *ptr = start;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = LLNode;
    }
}
void insertAtAnyPoint()
{
    struct node *LLNode = NULL;
    LLNode = singleNode();
    if (start == NULL)
    {
        start = LLNode;
    }
    else
    {
        int ch, afbf, nodeNo, i = 1;
        struct node *ptr = NULL;
        printf("Where you want to insert the node:\n1) any specific location\n2) any specific data location\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the location: ");
            scanf("%d", &nodeNo);
            printf("Where you want to insert the node \n1) after the %d node \n2) before the %d node\n Enter your choice: ", nodeNo, nodeNo);
            scanf("%d", &afbf);
            switch (afbf)
            {
            case 1:
                if (start == NULL)
                {
                    start = LLNode;
                }
                else
                {
                    struct node *ptr = start;
                    struct node *ctr = start;
                    while (i < nodeNo)
                    {
                        ptr = ptr->link;
                        ctr = ctr->link;
                        i++;
                    }
                    ctr = ctr->link;
                    ptr->link = LLNode;
                    LLNode->link = ctr;
                }
                break;
            case 2:
                if (start == NULL)
                {
                    start = LLNode;
                }
                else
                {
                    struct node *ptr = start;
                    struct node *ctr = NULL;
                    while (i < nodeNo)
                    {
                        ctr = ptr;
                        ptr = ptr->link;
                        i++;
                    }
                    ctr->link = LLNode;
                    LLNode->link = ptr;
                }
                break;
            default:
                printf("wrong input! Do it again LOL!");
                break;
            }
            break;
        case 2:
            search();
            printf("\nNow enter the node no: ");
            scanf("%d", &nodeNo);
            printf("Where you want to insert the node \n1) after the %d node \n2) before the %d node\n Enter your choice: ", nodeNo, nodeNo);
            scanf("%d", &afbf);
            switch (afbf)
            {
            case 1:
                if (start == NULL)
                {
                    start = LLNode;
                }
                else
                {
                    struct node *ptr = start;
                    struct node *ctr = start;
                    while (i < nodeNo)
                    {
                        ptr = ptr->link;
                        ctr = ctr->link;
                        i++;
                    }
                    ctr = ctr->link;
                    ptr->link = LLNode;
                    LLNode->link = ctr;
                }
                break;
            case 2:
                if (start == NULL)
                {
                    start = LLNode;
                }
                else
                {
                    struct node *ptr = start;
                    struct node *ctr = NULL;
                    while (i < nodeNo)
                    {
                        ctr = ptr;
                        ptr = ptr->link;
                        i++;
                    }
                    ctr->link = LLNode;
                    LLNode->link = ptr;
                }
                break;
            default:
                printf("wrong input! Do it again LOL!");
                break;
            }
            break;

        default:
            printf("wrong input! Do it again LOL!");
            break;
        }
    }
}
void deleteAtBegining()
{
    if (start == NULL)
    {
        printf("Node is empty! create node first");
    }
    else
    {
        struct node *ptr = start;
        start = ptr->link;
        free(ptr);
    }
    display();
}
void deleteAtEnd()
{
    if (start == NULL)
    {
        printf("Node is empty! create node first");
    }
    else
    {
        struct node *ptr = start;
        struct node *ctr = NULL;
        while (ptr->link != NULL)
        {
            ctr = ptr;
            ptr = ptr->link;
        }
        ctr->link = NULL;
        free(ptr);
    }
    display();
}
void deleteAtAnyPoint()
{
    if (start == NULL)
    {
        printf("Node is empty! create node first");
    }
    else
    {
        int ch, nodeNo, i = 1;
        struct node *ptr = start;
        struct node *ctr = NULL;
        printf("Where you want to delete the node:\n1) any specific location\n2) any specific data location\nEnter your choice:- ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter node no you want to delete: ");
            scanf("%d", &nodeNo);
            while (i < nodeNo)
            {
                ctr = ptr;
                ptr = ptr->link;
                i++;
            }
            ctr->link = ptr->link;
            free(ptr);
            display();
            break;
        case 2:
            search();
            printf("\nEnter node no you want to delete: ");
            scanf("%d", &nodeNo);
            while (i < nodeNo)
            {
                ctr = ptr;
                ptr = ptr->link;
                i++;
            }
            ctr->link = ptr->link;
            free(ptr);
            display();
            break;

        default:
            printf("wrong input! Do it again LOL!");
            break;
        }
    }
}
void createdoubleNode()
{
    int n = 0;
    printf("How many node you want to create: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct dnode *temp = (struct dnode *)malloc(sizeof(struct dnode));
        int a = 0;
        printf("Enter data for %d double node: ", i);
        scanf("%d", &a);
        temp->data = a;
        temp->next = NULL;
        temp->pri = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            struct dnode *ptr = head;
            while (ptr->next != NULL)
            {

                ptr = ptr->next;
            }
            temp->pri = ptr;
            ptr->next = temp;
        }
    }
}
void displayOfdouble()
{
    printf("Link List: ");
    if (head == NULL)
    {
        printf("Node is empty!");
    }
    else
    {
        struct dnode *ptr = head;
        while (ptr->next != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
}
void searchOfdouble()
{
    int n;
    if (head == NULL)
    {
        printf("\nSearch : Your node is empty! NO RESULT FOUND");
    }
    else
    {
        printf("\nEnter data to search: ");
        scanf("%d", &n);
        struct dnode *ptr = head;
        int count = 1, true = 0, a = 0;
        while (ptr->next != NULL)
        {
            if (ptr->data == n)
            {
                printf("Data Found on node no %d\n", count);
                true ++;
            }
            ptr = ptr->next;
            count++;
        }
        if (ptr->next == NULL)
        {
            ptr->data == n ? printf("Data Found on node no %d, ", count) : true == 0 ? printf("Sorry no data Found!")
                                                                                     : printf("Your data is fatched ENJOY!");
        }
    }
}
void countOfdouble()
{
    int count = 1;
    if (head == NULL)
    {
        printf("Empty list!");
    }
    else
    {
        struct dnode *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            count++;
        }
        printf("Total Node is :%d", count);
    }
}
struct dnode *doubleNode()
{
    int a;
    struct dnode *first = NULL;
    struct dnode *firstNode = NULL;
    first = (struct dnode *)malloc(sizeof(struct dnode));
    printf("Enter data of node: ");
    scanf("%d", &a);
    first->data = a;
    first->next = NULL;
    first->pri = NULL;
    firstNode = first;
    return firstNode;
}
void insertAtBeginingdll()
{
    struct dnode *LLNode = NULL;
    LLNode = (struct dnode *)doubleNode();
    if (head == NULL)
    {
        head = LLNode;
    }
    else
    {
        struct dnode *ptr = head;
        head = LLNode;
        head->next = ptr;
        ptr->pri = head;
    }
}
void insertAtEnddll()
{
    struct dnode *LLNode = NULL;
    LLNode = (struct dnode *)doubleNode();
    if (head == NULL)
    {
        head = LLNode;
    }
    else
    {
        struct dnode *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        LLNode->pri = ptr;
        ptr->next = LLNode;
    }
}
void insertAtAnyPointdll()
{
    struct dnode *LLNode = NULL;
    LLNode = (struct dnode *)doubleNode();
    if (head == NULL)
    {
        head = LLNode;
    }
    else
    {
        int ch, afbf, nodeNo, i = 1;
        struct dnode *ptr = NULL;
        printf("Where you want to insert the node:\n1) any specific location\n2) any specific data location\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the location: ");
            scanf("%d", &nodeNo);
            printf("Where you want to insert the node \n1) after the %d node \n2) before the %d node\n Enter your choice: ", nodeNo, nodeNo);
            scanf("%d", &afbf);
            switch (afbf)
            {
            case 1:
                if (head == NULL)
                {
                    head = LLNode;
                }
                else
                {
                    struct dnode *ptr = head;
                    struct dnode *ctr = head;
                    while (i < nodeNo)
                    {
                        ptr = ptr->next;
                        ctr = ctr->next;
                        i++;
                    }
                    ctr = ctr->next;
                    ctr->pri = LLNode;
                    LLNode->pri = ptr;
                    LLNode->next = ctr;
                    ptr->next = LLNode;
                }
                break;
            case 2:
                if (head == NULL)
                {
                    head = LLNode;
                }
                else
                {
                    struct dnode *ptr = head;
                    struct dnode *ctr = NULL;
                    while (i < nodeNo)
                    {
                        ctr = ptr;
                        ptr = ptr->next;
                        i++;
                    }
                    ctr->next = LLNode;
                    LLNode->pri = ctr;
                    LLNode->next = ptr;
                    ptr->pri = LLNode;
                }
                break;
            default:
                printf("wrong input! Do it again LOL!");
                break;
            }
            break;
        case 2:
            searchOfdouble();
            printf("\nNow enter the node no: ");
            scanf("%d", &nodeNo);
            printf("Where you want to insert the node \n1) after the %d node \n2) before the %d node\n Enter your choice: ", nodeNo, nodeNo);
            scanf("%d", &afbf);
            switch (afbf)
            {
            case 1:
                if (head == NULL)
                {
                    head = LLNode;
                }
                else
                {
                    struct dnode *ptr = head;
                    struct dnode *ctr = head;
                    while (i < nodeNo)
                    {
                        ptr = ptr->next;
                        ctr = ctr->next;
                        i++;
                    }
                    ctr = ctr->next;
                    ctr->pri = LLNode;
                    LLNode->pri = ptr;
                    LLNode->next = ctr;
                    ptr->next = LLNode;
                }
                break;
            case 2:
                if (head == NULL)
                {
                    head = LLNode;
                }
                else
                {
                    struct dnode *ptr = head;
                    struct dnode *ctr = NULL;
                    while (i < nodeNo)
                    {
                        ctr = ptr;
                        ptr = ptr->next;
                        i++;
                    }
                    ctr->next = LLNode;
                    LLNode->pri = ctr;
                    LLNode->next = ptr;
                    ptr->pri = LLNode;
                }
                break;
            default:
                printf("wrong input! Do it again LOL!");
                break;
            }
            break;

        default:
            printf("wrong input! Do it again LOL!");
            break;
        }
    }
}
void deleteAtBeginingdll()
{
    if (head == NULL)
    {
        printf("Node is empty! create node first");
    }
    else
    {
        struct dnode *ptr = head;
        head = ptr->next;
        free(ptr);
    }
    displayOfdouble();
}
void deleteAtEnddll()
{
    if (head == NULL)
    {
        printf("Node is empty! create node first");
    }
    else
    {
        struct dnode *ptr = head;
        struct dnode *ctr = NULL;
        while (ptr->next != NULL)
        {
            ctr = ptr;
            ptr = ptr->next;
        }
        ctr->next = NULL;
        free(ptr);
    }
    displayOfdouble();
}
void deleteAtAnypointdll()
{
    if (head == NULL)
    {
        printf("Node is empty! create node first");
    }
    else
    {
        int ch, nodeNo, i = 1;
        struct dnode *ptr = head;
        struct dnode *ctr = NULL;
        struct dnode *dtr = NULL;
        printf("Where you want to delete the node:\n1) any specific location\n2) any specific data location\nEnter your choice:- ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter node no you want to delete: ");
            scanf("%d", &nodeNo);
            while (i < nodeNo)
            {
                ctr = ptr;
                ptr = ptr->next;
                dtr = ptr->next;
                i++;
            }
            ctr->next = ptr->next;
            dtr->pri = ctr;
            free(ptr);
            displayOfdouble();
            break;
        case 2:
            searchOfdouble();
            printf("\nEnter node no you want to delete: ");
            scanf("%d", &nodeNo);
            while (i < nodeNo)
            {
                ctr = ptr;
                ptr = ptr->next;
                dtr = ptr->next;
                i++;
            }
            ctr->next = ptr->next;
            dtr->pri = ctr;
            free(ptr);
            displayOfdouble();
            break;

        default:
            printf("wrong input! Do it again LOL!");
            break;
        }
    }
}
int main()
{
    int sORd;
    printf("Main Menu: 1) Single Link list operation\n\t   2) Double link list operation\n");
    while (1)
    {
        printf("Your choice: ");
        scanf("%d", &sORd);
        switch (sORd)
        {
        case 1:
            printf("MENU\n1) Create node\n2) Display Node\n3) Search \n4) Count\n5) Insert node at begining\n6) Insert node at End of node\n7) Return to main manu\n8) insert At Any Point of the node\n9) delete at begining\n10) delete at the end\n11) delete at any point");
            int ch, subcaseNo;
            while (ch != 7)
            {
                printf("\nEnter Your Choice:");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                    createNode();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    search();
                    break;
                case 4:
                    printf("\nMENU for sub case:\n1. count of all nodes\n2. count upto special data node\n Enter your Choices: ");
                    scanf("%d", &subcaseNo);
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
                case 5:
                    insertAtBegining();
                    break;
                case 6:
                    insertAtEnd();
                    break;
                case 7:
                    break;
                case 8:
                    insertAtAnyPoint();
                    break;
                case 9:
                    deleteAtBegining();
                    break;
                case 10:
                    deleteAtEnd();
                    break;
                case 11:
                    deleteAtAnyPoint();
                    break;
                default:
                    printf("wrong input!");
                    break;
                }
            }
            break;
        case 2:
            printf("MENU\n1) Create double node\n2) Display of double Node\n3) Search in double LL \n4) Count of DLL\n5) Insert double LL node at begining\n6) Insert double LL node at End of node\n7) Return to main manu\n8) insert At Any Point of the double node\n9) delete at begining\n10) delete at the end\n11) delete at any point");
            int cho, subcase_No;
            while (cho != 7)
            {
                printf("\nEnter Your Choice:");
                scanf("%d", &cho);
                switch (cho)
                {
                case 1:
                    createdoubleNode();
                    break;
                case 2:
                    displayOfdouble();
                    break;
                case 3:
                    searchOfdouble();
                    break;
                case 4:
                    printf("\nMENU for sub case:\n1. count of all double nodes\n2. count upto special data of double node\n Enter your Choices: ");
                    scanf("%d", &subcase_No);
                    switch (subcase_No)
                    {
                    case 1:
                        countOfdouble();
                        break;
                    case 2:
                        searchOfdouble();
                        break;
                    default:
                        printf("Wrong input!");
                        break;
                    }
                    break;
                case 5:
                    insertAtBeginingdll();
                    break;
                case 6:
                    insertAtEnddll();
                    break;
                case 7:
                    break;
                case 8:
                    insertAtAnyPointdll();
                    break;
                case 9:
                    deleteAtBeginingdll();
                    break;
                case 10:
                    deleteAtEnddll();
                    break;
                case 11:
                    deleteAtAnypointdll();
                    break;
                default:
                    printf("wrong input!");
                    break;
                }
            }
            break;
        case 3:
            exit(0);
            break;

        default:
            printf("wrong input!");
            break;
        }
    }
    return 0;
}