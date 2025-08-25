//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/


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