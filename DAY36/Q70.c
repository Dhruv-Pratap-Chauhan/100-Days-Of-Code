#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n], temp;
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter positions to rotate: ");
    scanf("%d",&k);
    k = k % n;
    int res[n];
    for(i=0;i<n;i++) res[(i+k)%n]=arr[i];
    printf("Array after rotation: ");
    for(i=0;i<n;i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}
