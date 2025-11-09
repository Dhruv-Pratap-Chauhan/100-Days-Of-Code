#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n+1], i;
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter position and element to insert: ");
    scanf("%d %d",&pos,&val);
    for(i=n-1;i>=pos;i--) arr[i+1]=arr[i];
    arr[pos]=val;
    printf("Array after insertion: ");
    for(i=0;i<=n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
