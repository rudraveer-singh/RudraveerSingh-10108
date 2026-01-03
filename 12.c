#include <stdio.h>
// String intro, strlen, strcpy, strcat, strcmp
int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Choose an operation:\n");
    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Concatenation\n");
    printf("4. String Comparison\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Length of first string: %lu\n", strlen(str1)); // -1 to exclude newline
        printf("Length of second string: %lu\n", strlen(str2));
        break;
    case 2:
        strcpy(str1, str2);
        printf("After copying, first string: %s", str1);
        break;
    case 3:
        strcat(str1, str2);
        printf("After concatenation, first string: %s", str1);
        break;
    case 4:
        if (strcmp(str1, str2) == 0)
            printf("Strings are equal.\n");
        else
            printf("Strings are not equal.\n");
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}