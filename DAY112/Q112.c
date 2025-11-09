#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int max_sum = arr[0], current_sum = arr[0];
    for(int i=1;i<n;i++){
        if(current_sum < 0) current_sum = arr[i];
        else current_sum += arr[i];
        if(current_sum > max_sum) max_sum = current_sum;
    }
    printf("Maximum subarray sum: %d\n", max_sum);
    return 0;
}
