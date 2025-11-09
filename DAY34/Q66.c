#include <stdio.h>

int main() {
    int n, x, i;
    printf("Enter number of elements in sorted array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to insert: ");
    scanf("%d",&x);
    int j=n-1;
    while(j>=0 && arr[j]>x){ arr[j+1]=arr[j]; j--; }
    arr[j+1]=x;
    printf("Array after insertion: ");
    for(i=0;i<=n;i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
