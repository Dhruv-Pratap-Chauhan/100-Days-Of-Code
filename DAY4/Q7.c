//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/


#include <stdio.h>
 int main()
 {
    int n1, n2;
    printf("Enter both integers (seperate them by space) ");
    scanf("%d %d", &n1, &n2);

    printf("After swapping: %d %d\n", n2, n1);
    return 0;
 }