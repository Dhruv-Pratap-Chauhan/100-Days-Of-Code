#include <stdio.h>

int main() {
    int n, x, index=-1;
    printf("Enter number of elements in sorted array: ");
    scanf("%d",&n);
    int arr[n], i;
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&x);
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){ index=mid; break; }
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    printf("Found at index: %d\n", index);
    return 0;
}
