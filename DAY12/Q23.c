#include <stdio.h>
int main ()
{
    int per;
    printf ("enter percentage of a student ");
    scanf ("%d",&per);

    if (per >= 90 && per <=100)
    {
        printf ("excellent");
    }
    else if (per >=80 && per < 90)
    {
        printf ("Very good");
    }
    else if (per >=70 && per < 80)
    {
        printf ("good");
    }
    else if (per >=60 && per < 70)
    {
        printf ("can do better");
    }
    else if (per >=50 && per < 60)
    {
        printf ("Average");
    }
    else if (per >=40 && per < 50)
    {
        printf ("Below Average");
    }
    else if (per >=0 && per < 40)
    {
        printf ("Fail");
    }
    else 
        printf ("entered a vaild percentage");
    return 0;
}