#include <stdio.h>

int main() {
    int n;
    printf("Enter positive integer n: ");
    scanf("%d",&n);
    int pivot=-1;
    for(int x=1;x<=n;x++){
        int sum1=x*(x+1)/2;
        int sum2=(n*(n+1)/2)-((x-1)*x/2);
        if(sum1==sum2){ pivot=x; break; }
    }
    printf("Pivot integer: %d\n", pivot);
    return 0;
}
