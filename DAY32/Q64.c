#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int secondLargest = -1, largest = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] < largest) {
            secondLargest = a[i];
        }
    }
    printf("Second largest: %d\n", secondLargest);
    return 0;
}
