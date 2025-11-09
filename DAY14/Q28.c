#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int product = 1;
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
        }
    }
    printf("%d\n", product);
    return 0;
}
