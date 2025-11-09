#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float sum = 0.0;
    for (int i = 1; i <= n; i++)
        sum += (float)(2 * i - 1) / (2 * i);
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
