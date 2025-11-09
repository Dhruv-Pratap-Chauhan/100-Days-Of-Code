#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=-2147483648, second=-2147483648;
    for(int i=0;i<n;i++){
        if(arr[i]>max){ second=max; max=arr[i]; }
        else if(arr[i]>second && arr[i]!=max) second=arr[i];
    }
    printf("Second largest element: %d\n", second);
    return 0;
}
