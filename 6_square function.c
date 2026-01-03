#include <stdio.h>
// Function to find square of a number
int square(int num)
{
    return num * num;
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = square(num);
    printf("Square of %d is %d\n", num, result);

    return 0;
}