#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[50];
    int a, range_min, range_max, head, head1, count, st = 0, index, ch;
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
    for (int i = 0; i < count; i++)
    {
        if (arr[i] >= head)
        {
            index = i;
            break;
        }
    }
    while (1)
    {
        printf("\n\nMENU: \n1) LEFT\n2) RIGHT\n3) Exit\nENTER YOUR CHOICE: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (int i = index - 1; i >= 0; i--)
            {
                st += abs(head - arr[i]);
                head = arr[i];
            }
            for (int i = index; i < count; i++)
            {
                st += abs(head - arr[i]);
                head = arr[i];
            }
            st += (2 * abs(arr[0] - range_min));
            printf("ST: %d", st);
            st = 0;
            head = head1;
            break;
        case 2:
            for (int i = index; i < count; i++)
            {
                st += abs(head - arr[i]);
                head = arr[i];
            }
            for (int i = index - 1; i >= 0; i--)
            {
                st += abs(head - arr[i]);
                head = arr[i];
            }
            st += (2 * abs(arr[count - 1] - range_max));
            printf("ST: %d", st);
            st = 0;
            head = head1;
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Wrong choice!");
            break;
        }
    }
}
