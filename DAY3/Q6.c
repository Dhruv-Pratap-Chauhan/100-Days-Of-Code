#include <stdio.h>
int main()
{
    int a, b, s;

    printf("Enter two integers(seperate them with space): ");
    scanf("%d %d", &a, &b);

    s = a;
    a = b;
    b = s;

    printf("Integers after swapping: %d %d\n", a, b);
    return 0;   
}