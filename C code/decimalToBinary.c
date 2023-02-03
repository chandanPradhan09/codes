#include<stdio.h>
int main(){
    int no,binary=0,i=0,POW=1;
    printf("Enter a decimal no: ");
    scanf("%d",&no);
    while (no>0)
    {
        i=no%2;
        binary+=(POW*i);
        POW*=10;
        no=no/2;
    }
    printf("Binary no is: %d",binary);
    return 0;
}