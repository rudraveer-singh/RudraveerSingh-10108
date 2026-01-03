#include <stdio.h>
int main()
{
    int x, y, num;
    scanf("%d %d %d \n", &x, &y, &num);
    if (x % 2 == 0)
    {
        if (y % 2 == 0)
        {
            printf("Both numbers are even\n");
        }
        else
        {
            printf("Only x is even\n");
        }
    }
    else
    {
        printf("x is odd \n");
    }
    (num % 2 == 0) ? printf("num is even \n") : printf("num is odd \n");
    return 0;
}