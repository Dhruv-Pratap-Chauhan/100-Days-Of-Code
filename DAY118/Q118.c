#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n], total_sum=n*(n+1)/2, sum=0;
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Missing number: %d\n", total_sum - sum);
    return 0;
}
