#include <stdio.h>
int main()
{
    int a, decimal, i, s = 0, c = 1;
    printf("Enter a binary no : ");
    scanf("%d", &a);
    decimal = 0;

    while (a != 0)
    {
        i = a % 10;
        decimal += i * c;
        s++;
        c *= 2;
        a /= 10;
    }
    printf("Decimal no is: %d", decimal);

    return 0;
}