#include <stdio.h>
int main()
{
    int n1, n2, z;

    printf("Enter your first number: ");
    scanf("%d", &n1);
    printf("Enter your second number: ");
    scanf("%d", &n2); 
    
    z = n1 + n2;
    printf("Sum: %d\n", z);

    z = n1 - n2;
    printf("Difference: %d\n", z);              

    z = n1 * n2;
    printf("Product: %d\n", z);

    z = n1 / n2;
    printf("Quotient: %d\n", z);    
    
    return 0;
}