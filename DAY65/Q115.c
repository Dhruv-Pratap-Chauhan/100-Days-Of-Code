#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter position and value to insert: ");
    scanf("%d %d",&pos,&val);
    for(int i=n-1;i>=pos;i--) arr[i+1]=arr[i];
    arr[pos]=val;
    n++;
    printf("Array after insertion: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
