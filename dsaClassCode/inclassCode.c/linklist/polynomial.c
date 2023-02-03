#include <stdio.h>
#include <stdlib.h>

struct Equation1
{
    int coeff;
    int expo;
    struct Equation1 *right;
};
struct Equation2
{
    int coeff;
    int expo;
    struct Equation2 *right;
};
struct Result
{
    int coeff;
    int expo;
    struct Result *right;
};
typedef struct Equation1 eq1;
typedef struct Equation2 eq2;
typedef struct Result res;
eq1 *head1 = NULL;
eq2 *head2 = NULL;
res *headres = NULL;

void takeInputEq1(int co, int exp)
{
    eq1 *ptr = (eq1 *)malloc(sizeof(eq1));
    ptr->expo = exp;
    ptr->coeff = co;
    ptr->right = NULL;
    if (head1 == NULL)
    {
        head1 = ptr;
    }
    else
    {
        eq1 *ptr1 = head1, *ptr2 = NULL;
        while (ptr1->right != NULL)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->right;
        }
        ptr1->right = ptr;
    }
}
void takeInputEq2(int co, int exp)
{
    eq2 *ptr = (eq2 *)malloc(sizeof(eq2));
    ptr->expo = exp;
    ptr->coeff = co;
    if (head2 == NULL)
    {
        ptr->right = NULL;
        head2 = ptr;
    }
    else
    {
        eq2 *ptr1 = head2, *ptr2 = NULL;
        while (ptr1->right != NULL)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->right;
        }
        ptr1->right = ptr;
    }
}
void takeInputResult(int co, int exp)
{
    res *ptr = (res *)malloc(sizeof(res));
    ptr->expo = exp;
    ptr->coeff = co;
    if (headres == NULL)
    {
        ptr->right = NULL;
        headres = ptr;
    }
    else
    {
        res *ptr1 = headres, *ptr2 = NULL;
        while (ptr1->right != NULL)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->right;
        }
        ptr1->right = ptr;
    }
}
void displayRESULT()
{
    res *ptr = headres;
    if (headres == NULL)
    {
        printf("\nNothing to show, Please enter something...");
    }
    else
    {
        printf("\nThe result of summation is: ");
        while (ptr != NULL)
        {
            printf("%dx^%d", ptr->coeff, ptr->expo);
            printf(" +");
            ptr = ptr->right;
        }
    }
}
void createResult()
{
    eq1 *ptr1 = head1;
    eq2 *ptr2 = head2;
    res *res1 = headres;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->expo == ptr2->expo)
        {
            takeInputResult(ptr1->coeff + ptr2->coeff, ptr1->expo);
            ptr1 = ptr1->right;
            ptr2 = ptr2->right;
        }
        else if (ptr1->expo > ptr2->expo)
        {
            takeInputResult(ptr1->coeff, ptr1->expo);
            ptr1 = ptr1->right;
        }
        else
        {
            takeInputResult(ptr2->coeff, ptr2->expo);
            ptr2 = ptr2->right;
        }
    }
    if (ptr1 == NULL)
    {
        while (ptr2 != NULL)
        {
            takeInputResult(ptr2->coeff, ptr2->expo);
            ptr2 = ptr2->right;
        }
    }
    else{
            while (ptr1 != NULL)
            {
                takeInputResult(ptr1->coeff, ptr1->expo);
                ptr1 = ptr1->right;
            }
        }
}
void main()
{
    int term1 = 0, term2 = 0;
    int co1, exp1, co2, exp2;
    printf("\nEnter the number of terms for equation1: ");
    scanf("%d", &term1);
    int i = 1;
    while (term1--)
    {
        printf("\nEnter the %dth term co-efficient for equation1: ", i);
        scanf("%d", &co1);
        printf("\nEnter the %dth term exponent for equation1: ", i);
        scanf("%d", &exp1);
        takeInputEq1(co1, exp1);
        i++;
    }

    printf("\nEnter the number of terms for equation2: ");
    scanf("%d", &term2);
    int j = 1;
    while (term2--)
    {
        printf("\nEnter the %dth term co-efficient for equation2: ", j);
        scanf("%d", &co2);
        printf("\nEnter the %dth term exponent for equation2: ", j);
        scanf("%d", &exp2);
        takeInputEq2(co2, exp2);
        j++;
    }
    createResult();
    displayRESULT();
}