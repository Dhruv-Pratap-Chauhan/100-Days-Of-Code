#include <stdio.h>

int main() {
    int n,key,low=0,high,mid,found=-1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){ found=mid; break; }
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    printf("%d\n",found);
    return 0;
}
