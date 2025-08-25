//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

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