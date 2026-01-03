#include <stdio.h>
// factorial function
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);

    return 0;
}