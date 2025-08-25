//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
int main()
{
    float r, a, c;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);    

    a = 3.1415 * r*r;
    printf("Area of circle is: %f\n", a);

    c = 2 * 3.1415 * r;
    printf("Circumference of circle is: %f\n", c);

    return 0;
}