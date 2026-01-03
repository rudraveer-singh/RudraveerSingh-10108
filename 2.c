#include <stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    printf("sum of the two numbers: %d\n", x + y);
    if (x > y)
    {
        printf("x is the larger number");
    }
    else if (y > x)
    {
        printf("y is the larger number");
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}