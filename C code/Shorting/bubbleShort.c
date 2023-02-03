#include <stdio.h>
void display(int * a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void bShort(int *a,int n){
    int flag=0,temp;
    for (int i = 0; i < n-1; i++)
    {
        printf("NO of times %d\n",i+1);
        flag=1;
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
            
        }
        if (flag)
        {
            return;
        }
    }
}
int main()
{
    // int a[]={1,23,34,3,2,456,343,34,46,45,364,6445,2323,54,34,3234};
    int a[]={1,2,34,4,14,6,7,8,9};
    display(a,(sizeof(a)/sizeof(a[0])));
    bShort(a,(sizeof(a)/sizeof(a[0])));
    display(a,(sizeof(a)/sizeof(a[0])));
    return 0;
}