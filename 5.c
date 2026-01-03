#include <stdio.h>
int main()
{
    // Print numbers 1-10 using loops, Sum of N numbers, Use break & continue
    int i, j, n, sum = 0;
    scanf("%d", &n);
    for (j = 1; j <= 10; j++)
    {
        if (j == 5)
        {
            continue; // Skip number 5
        }
        if (j == 8)
        {
            break; // Stop the loop when i is 8
        }
        printf("%d\n", j);
    }
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum = %d\n", sum);
    return 0;
}