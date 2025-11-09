#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int total=0;
    for(int i=0;i<n;i++) total+=arr[i];
    int leftsum=0, pivot=-1;
    for(int i=0;i<n;i++){
        if(leftsum==total-arr[i]-leftsum){
            pivot=i;
            break;
        }
        leftsum+=arr[i];
    }
    printf("Pivot index: %d\n", pivot);
    return 0;
}
