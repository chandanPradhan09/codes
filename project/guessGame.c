#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a,b,guess,count=1;
    srand(time(0));
    a=rand();
    b=a%100+1;
    // printf("%d\n",b);
    do
    {
        printf("Guess the no: ");
        scanf("%d",&guess);
        if (guess>b)
        {
            printf("Guess Smaller!\n");
        }
        else if (guess<b)
        {
            printf("Guess Larger!\n");
        }
        else
        {
            printf("Nice! You guessed it in %d attempts",count);
        }
        count++;
    } while (guess!=b);
    
}