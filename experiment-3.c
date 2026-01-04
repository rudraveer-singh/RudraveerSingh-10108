#include <stdio.h>
int main()
{
    int a;
    int b;
    char c;
    float d;
    double e;
    int extra;
    scanf("%d %d %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d %d %c %f %lf \n", a, b, c, d, e);
    printf("numbers before swapping: %d %d\n", a, b);
    extra = a;
    a = b;
    b = extra;
    printf("numbers after swapping: %d %d\n", a, b);
    return 0;
}

