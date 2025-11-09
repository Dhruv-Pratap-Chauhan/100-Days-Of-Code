#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);
    swapped = last * (int)pow(10, digits) + (n % (int)pow(10, digits)) - last + first;
    printf("%d\n", swapped);
    return 0;
}
