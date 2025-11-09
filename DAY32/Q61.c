#include <stdio.h>

int main() {
    int n, key, index=-1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n], i;
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){ index=i; break; }
    }
    printf("Found at index: %d\n", index);
    return 0;
}
