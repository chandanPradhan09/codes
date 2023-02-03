#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[50];
    int a, range_min, range_max, head, count, st = 0;
    printf("Enter the min range: ");
    scanf("%d", &range_min);
    printf("Enter the max range: ");
    scanf("%d", &range_max);
    printf("Enter the value of head: ");
    scanf("%d", &head);
    printf("Enter how many process: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter %d process: ", i);
        scanf("%d", &arr[i]);
        while (arr[i] < range_min || arr[i] > range_max)
        {
            printf("Wrong input! put it again.");
            printf("Enter %d process: ", i);
            scanf("%d", &arr[i]);
        }
    }

    for (int i = 0; i < count; i++)
    {
        st += abs(head - arr[i]);
        head = arr[i];
    }
    printf("ST: %d", st);
}