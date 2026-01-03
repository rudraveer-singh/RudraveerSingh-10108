#include <stdio.h>
// pass by reference and value
void passByValue(int num)
{
    num = num + 10;
    printf("Inside passByValue function: %d\n", num);
}
void passByReference(int *numPtr)
{
    *numPtr = *numPtr + 10;
    printf("Inside passByReference function: %d\n", *numPtr);
}
int main()
{
    int value = 20;
    printf("Before passByValue function: %d\n", value);
    passByValue(value);
    printf("After passByValue function: %d\n", value);

    int refValue = 20;
    printf("Before passByReference function: %d\n", refValue);
    passByReference(&refValue);
    printf("After passByReference function: %d\n", refValue);

    return 0;
}