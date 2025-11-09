#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    float sum = 0.0;
    int denom = 3;
    for (int i = 1; i <= n; i++) {
        sum += (float)(2 * i) / denom;
        denom += 4;
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
