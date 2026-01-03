#include <stdio.h>
// 2D Array input/output, Sum of elements
int main()
{
    int rows, cols, i, j, sum = 0;

    // Taking number of rows and columns input
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Taking 2D array elements input
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Displaying the 2D array
    printf("The array elements are:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Calculating the sum of all elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}