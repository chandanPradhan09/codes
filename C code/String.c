#include<stdio.h>
int main(){
    char st[]={"Chandan Pradhan"};
    int a= sizeof(st);
    printf("Rev:");
    for (int i = a-1; i >= 0; i--)
    {
        printf("%c",st[i]);
    }
    
    return 0;
}