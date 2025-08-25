//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include  <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter your first number; ");
    scanf("%d", &n1);
    printf("Enter your second number: ");
    scanf("%d", &n2);

    printf("The sum of %d and %d is %d\n", n1, n2, n1 + n2);

    return 0;
}