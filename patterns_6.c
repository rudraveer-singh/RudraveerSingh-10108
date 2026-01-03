#include <stdio.h>
// star and number patterns
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Star right-angled triangle pattern
    printf("Star Pattern:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // star left sided triangle pattern
    printf("Star Left Sided Triangle Pattern:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // star rectangle pattern
    printf("Star Rectangle Pattern:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Number right-angled triangle pattern
    printf("Number Pattern:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}