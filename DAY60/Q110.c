#include <stdio.h>

int main() {
    int n, key, pos=-1;
    printf("Enter number of elements (sorted): ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){ pos=i; break; }
    }
    printf("Found at index: %d\n", pos);
    return 0;
}
