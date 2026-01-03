#include <stdio.h>
int main()
{
    // this is a mini projetct with the project ID 4, the number classification system
    int number;
    // first we will take input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);
    // using independant if statements to classify the number
    if (number > 0)
    {
        printf("%d is a positive number.\n", number);
    }
    if (number < 0)
    {
        printf("%d is a negative number.\n", number);
    }
    if (number == 0)
    {
        printf("The number is zero.\n");
    }
    // now checking if the number is even or odd
    if (number % 2 == 0)
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }
    // now checking if the number is prime or not by using loop from 2 to n-1
    int isPrime = 1; // assume number is prime until proven otherwise
    if (number <= 1)
    {
        isPrime = 0; // numbers less than or equal to 1 are not prime
    }
    else
    {
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0; // found a divisor, not prime
                break;
            }
        }
    }
    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}