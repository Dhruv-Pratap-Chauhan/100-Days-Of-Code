//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, s, c;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    s = (p * r * t) / 100.0;
    printf("Simple interest: %f\n", s);

    c = p * (pow((1 + r / 100.0), t)) - p;
    printf("Compound interest: %f\n", c);

    return 0;
}
