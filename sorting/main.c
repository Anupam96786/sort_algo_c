#include <stdio.h>
#include <stdlib.h>
#include "quick.h"
#include "merge.h"
#include "insert.h"
#include "bubble.h"
#include "selectionsort.h"
int *A;
int main()
{
    int i, len, choice;
    A = (int *)malloc(len * sizeof(int));
    printf("Enter the length of your array: - ");
    scanf("%d", &len);
    printf("Enter the values of your array: - \n");
    for (i = 0; i < len; i++)
        scanf("%d", &A[i]);
    printf("Before Sorting, Array is: - ");
    for (i = 0; i < len; i++)
        printf("%d ", A[i]);
    printf("\n+---------------------+");
    printf("\n|Enter sorting process|");
    printf("\n+---------------------+");
    printf("\n| 1=Merge Sort        |\n| 2=Quick Sort        |\n| 3=insert Sort       |\n| 4=selection sort    |\n| 5=bubble sort       |");
    printf("\n| press any to exit   |");
    printf("\n+---------------------+");
    printf("\n\nenter your choice: - ");
    scanf("%d", &choice);
    while (choice!=0)
    {
        if (choice == 1)
        {
            merge(0, len - 1, len);
            printf("After merge sorting the array is: - ");
            for (i = 0; i < len; i++)
                printf("%d ", A[i]);
            break;
        }
        else if (choice == 2)
        {
            quick(0, len - 1);
            printf("After quick sorting the array is: - ");
            for (i = 0; i < len; i++)
                printf("%d ", A[i]);
            break;
        }
        else if (choice == 3)
        {
            insert(len - 1);
            printf("After insert sorting the array is: - ");
            for (i = 0; i < len; i++)
                printf("%d ", A[i]);
            break;
        }
        else if (choice == 4)
        {
            selectsort(len - 1);
            printf("After selection sorting the array is: - ");
            for (i = 0; i < len; i++)
                printf("%d ", A[i]);
            break;
        }
        else if (choice == 5)
        {
            bubblesort(len - 1);
            printf("After bubble sorting the array is: - ");
            for (i = 0; i < len; i++)
                printf("%d ", A[i]);
            break;
        }
        else
        {
            break;
        }
    }
    free(A);
}