#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[50];
    int a, range_min, range_max, head, head1, count, st = 0, index, ch, ind1, ind2;
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
        printf("\n1 ST: %d Ind: %d Head: %d", st,index,head);
        ind1 = abs(head - arr[index]);
        ind2 = abs(head - arr[index - 1]);
        printf("in1: %d in2: %d",ind1,ind2);
        if (ind1 >= ind2)
        {
            if (ind2 = 0)
            {
                st += abs(head - arr[index]);
                head = arr[index];
                for (int i = index; i < count; i++)
                {
                    for (int j = index + 1; j < count; j++)
                    {
                        arr[i] = arr[j];
                    }
                }
                printf("\n if1 ST: %d Ind: %d Head: %d", st,index,head);
            }
            else
            {
                st += abs(head - arr[index - 1]);
                head = arr[index - 1];
                for (int i = index - 1; i < count; i++)
                {
                    for (int j = index; j < count; j++)
                    {
                        arr[i] = arr[j];
                    }
                }
                printf("\n el1 ST: %d Ind: %d Head: %d", st,index,head);
            }
        }
        else
        {
            if (ind1 = 0)
            {
                st += abs(head - arr[index - 1]);
                head = arr[index - 1];
                for (int i = index - 1; i < count; i++)
                {
                    for (int j = index; j < count; j++)
                    {
                        arr[i] = arr[j];
                    }
                }
                printf(" \n elif ST: %d Ind: %d Head: %d", st,index,head);
            }
            else
            {
                st += abs(head - arr[index]);
                head = arr[index];
                for (int i = index; i < count; i++)
                {
                    for (int j = index + 1; j < count; j++)
                    {
                        arr[i] = arr[j];
                    }
                }
                printf("\n elel ST: %d Ind: %d Head: %d", st,index,head);
            }
        }
    }
    printf("\nST: %d", st);
    printf("\nST: %d Ind: %d Head: %d", st,index,head);
}