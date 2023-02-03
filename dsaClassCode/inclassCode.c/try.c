//insert an element in an array

#include<stdio.h>

int main(){
    int i,n,number,pos,arr[20];
    printf("Enter the no of elements in the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to add in the array : \n");
    scanf("%d",&number);
    printf("Enter the position where you want to place it : \n");
    scanf("%d",&pos);
    // arr[pos]=number;
    for(i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=number;
    n+=1;
    
    for(i=0;i<n;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}