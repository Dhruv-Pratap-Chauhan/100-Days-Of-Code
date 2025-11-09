#include <stdio.h>

int main() {
    int n, key, pos=-1;
    printf("Enter number of elements in sorted array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){ pos=mid; break; }
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    printf("Binary search index: %d\n", pos);
    return 0;
}
