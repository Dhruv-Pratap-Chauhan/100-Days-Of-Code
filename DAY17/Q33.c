#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, sum = 0;
    scanf("%d", &n);
    temp = n;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    // Calculate sum of powers of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
