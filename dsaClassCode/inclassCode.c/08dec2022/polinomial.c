#include<stdio.h>
#include<stdlib.h>
struct eq1 {
    int cofficent;
    int exponetial;
    struct ed1 *link;
};
struct eq2 {
    int cofficent;
    int exponetial;
    struct ed2 *link;
};
struct result {
    int cofficent;
    int exponetial;
    struct result *link;
};
int searcheq1(int);
int searcheq2(int);
void createeq2();
void createeq1();
void result(int,int);
void sum();
struct eq1 * start=NULL;
struct eq2 * head=NULL;
struct result * first=NULL;
void createeq1(){
    int n,i=1,a,b;
    printf("Enter How many terms in your eq1: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("Enter coffient of %d term: ",i);
        scanf("%d",&a);
        printf("Enter Exponetial of X in %d term: ",i);
        scanf("%d",&b);
        struct eq1 * temp=NULL;
        temp=(struct eq1 *)malloc(sizeof(struct eq1));
        temp->cofficent=a;
        temp->exponetial=b;
        temp->link=NULL;
        if (start==NULL)
        {
            start=temp;
        }
        else{
            struct eq1 * ptr=start;
            while (ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
        }
        i++;
    }
}
void createeq2(){
    int n,i=1,a,b;
    printf("Enter How many terms in your eq2: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("Enter coffient of %d term: ",i);
        scanf("%d",&a);
        printf("Enter Exponetial of X in %d term: ",i);
        scanf("%d",&b);
        struct eq2 * temp=NULL;
        temp=(struct eq2 *)malloc(sizeof(struct eq2));
        temp->cofficent=a;
        temp->exponetial=b;
        temp->link=NULL;
        if (head==NULL)
        {
            head=temp;
        }
        else{
            struct eq2 * ptr=head;
            while (ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
        }
        i++;
    }
}
void sum(){
    struct eq1 * ptr=start;
    struct eq2 * ctr=head;
    struct result * dtr=first;
    int a,b,i=1;
    while (ptr->link!=NULL)
    {
        
    }
    
     
    
    
}
int searcheq1(int n)
{
    int a;
    if (start == NULL)
    {
        printf("\nSearch : Your node is empty! NO RESULT FOUND");
    }
    else
    {
        int count = 1;
        struct eq1 *ptr = start;
        while (ptr->link!=NULL)
        {
            if(ptr->exponetial==n){
                a=count;
            }
            count++;
        }
        if(ptr->exponetial==n){
            a=count;
        }
    }
    return a;
}
int searcheq2(int n)
{
    int a;
    if (head == NULL)
    {
        printf("\nSearch : Your node is empty! NO RESULT FOUND");
    }
    else
    {
        int count = 1;
        struct eq1 *ptr = head;
        while (ptr->link!=NULL)
        {
            if(ptr->exponetial==n){
                a=count;
            }
            count++;
        }
        if(ptr->exponetial==n){
            a=count;
        }
    }
    return a;
}
void result(int a,int b){
    int n,i=1;
    printf("Enter How many terms in your eq: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("Enter coffient of %d term: ",i);
        scanf("%d",&a);
        printf("Enter Exponetial of X in %d term: ",i);
        scanf("%d",&b);
        struct result * temp=NULL;
        temp=(struct result *)malloc(sizeof(struct result));
        temp->cofficent=a;
        temp->exponetial=b;
        temp->link=NULL;
        if (first==NULL)
        {
            first=temp;
        }
        else{
            struct result * ptr=first;
            while (ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=temp;
        }
        
    }
}

int main(){
    createeq1();
    createeq2();
    
    return 0;
}