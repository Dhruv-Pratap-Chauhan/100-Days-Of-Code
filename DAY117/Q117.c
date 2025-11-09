#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter elements of first array: ");
    for(int i=0;i<m;i++) scanf("%d",&arr1[i]);
    printf("Enter size of second array: ");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter elements of second array: ");
    for(int i=0;i<n;i++) scanf("%d",&arr2[i]);

    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]) printf("%d ", arr1[i++]);
        else printf("%d ", arr2[j++]);
    }
    while(i<m) printf("%d ", arr1[i++]);
    while(j<n) printf("%d ", arr2[j++]);
    printf("\n");
    return 0;
}
