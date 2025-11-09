#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of elements in array 1: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr1[i]);
    printf("Enter number of elements in array 2: ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements: ");
    for(int i=0;i<m;i++) scanf("%d",&arr2[i]);
    printf("Merged array: ");
    for(int i=0;i<n;i++) printf("%d ", arr1[i]);
    for(int i=0;i<m;i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}
