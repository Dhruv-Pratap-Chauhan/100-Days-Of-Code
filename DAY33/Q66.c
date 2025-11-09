#include <stdio.h>

int main() {
    int n, key, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements in sorted order: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to insert: ");
    scanf("%d",&key);
    int pos=0;
    while(pos<n && arr[pos]<key) pos++;
    for(i=n;i>pos;i--) arr[i]=arr[i-1];
    arr[pos]=key;
    printf("Array after insertion: ");
    for(i=0;i<=n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
