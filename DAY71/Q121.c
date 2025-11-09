#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n], i, j, temp;
    printf("Enter the elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    // Bubble sort descending
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Array in descending order: ");
    for(i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
