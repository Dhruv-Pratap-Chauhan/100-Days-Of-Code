#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n], pos=0, neg=0, zero=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        else zero++;
    }
    printf("Positive=%d Negative=%d Zero=%d\n",pos,neg,zero);
    return 0;
}
