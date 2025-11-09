#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){ return *(int*)a - *(int*)b; }

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter k: ");
    scanf("%d",&k);

    qsort(arr, n, sizeof(int), cmp);
    printf("kth smallest element: %d\n", arr[k-1]);
    return 0;
}
