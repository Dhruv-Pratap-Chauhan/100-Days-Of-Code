#include <stdio.h>

int main() {
    int n, sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n], i;
    printf("Enter the elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++) sum += arr[i];
    printf("Sum of elements: %d\n", sum);
    return 0;
}
