#include <stdio.h>

int main() {
    int n, temp, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                count++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nSwaps: %d\n", count);
    return 0;
}
