#include <stdio.h>
 int main()
 {
    int n1, n2;
    printf("Enter both integers (seperate them by space) ");
    scanf("%d %d", &n1, &n2);

    printf("After swapping: %d %d\n", n2, n1);
    return 0;
 }