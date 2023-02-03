#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[50];
    int a, range_min, range_max, head, head1, count, st = 0, index, ch, ind1, ind2, left, right;
    printf("Enter the min range: ");
    scanf("%d", &range_min);
    printf("Enter the max range: ");
    scanf("%d", &range_max);
    printf("Enter the value of head: ");
    scanf("%d", &head);
    head1 = head;
    printf("Enter how many process: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter %d process: ", i);
        scanf("%d", &arr[i]);
        while (arr[i] < range_min || arr[i] > range_max)
        {
            printf("Wrong input! put it again.\n");
            printf("Enter %d process: ", i);
            scanf("%d", &arr[i]);
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    while (1)
    {
        printf("\n\nMENU:\n1) ");
    }
    
}