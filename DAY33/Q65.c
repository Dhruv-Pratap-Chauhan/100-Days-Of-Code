#include <stdio.h>

int main() {
    int n, key, index=-1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in sorted order: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){ index=mid; break; }
        else if(arr[mid]<key) l=mid+1;
        else h=mid-1;
    }
    printf("Found at index: %d\n", index);
    return 0;
}
