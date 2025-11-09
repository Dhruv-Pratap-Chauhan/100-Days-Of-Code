#include <stdio.h>

int main() {
    int n, max1=-2147483648, max2=-2147483648;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max1){ max2=max1; max1=arr[i]; }
        else if(arr[i]>max2) max2=arr[i];
    }
    printf("Second largest element: %d\n", max2);
    return 0;
}
