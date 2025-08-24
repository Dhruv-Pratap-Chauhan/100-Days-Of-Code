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