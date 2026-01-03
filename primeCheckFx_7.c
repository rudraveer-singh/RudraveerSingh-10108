#include <stdio.h>
// function to check if a number is prime
int Prime(int num)
{
    if (num <= 1)
        return 0; // not prime
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; // not prime
    }
    return 1; // prime
}
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (Prime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}