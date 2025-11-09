#include <stdio.h>

int main() {
    int n, x, ceilIndex=-1;
    printf("Enter number of elements in sorted array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in sorted order: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element x to find ceil: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]>=x){ ceilIndex=i; break; }
    }
    printf("Ceil index: %d\n", ceilIndex);
    return 0;
}
