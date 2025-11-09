#include <stdio.h>

int main() {
    int n, search, found = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (a[i] == search) {
            printf("Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Not found\n");
    return 0;
}
