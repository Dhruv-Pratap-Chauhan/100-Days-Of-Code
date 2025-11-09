#include <stdio.h>

int main() {
    int n, target, first=-1, last=-1;
    printf("Enter number of elements in sorted array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in sorted order: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter target element: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(first==-1) first=i;
            last=i;
        }
    }
    printf("First and last occurrence indices: %d,%d\n", first, last);
    return 0;
}
