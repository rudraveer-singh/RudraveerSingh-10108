#include <stdio.h>
// 1D Array input/output, Linear Search, Bubble Sort
int main()
{
    int n, i, j, temp, searchElement, found = 0;

    // Taking size of array input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array elements input
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Displaying the array
    printf("The array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Linear Search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == searchElement)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("%d is found in the array at position %d.\n", searchElement, i + 1);
    }
    else
    {
        printf("%d is not found in the array.\n", searchElement);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Displaying sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}