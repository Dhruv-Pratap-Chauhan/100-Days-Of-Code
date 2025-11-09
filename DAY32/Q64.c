#include <stdio.h>

int main() {
    int n, num, max_count=0, digit;
    printf("Enter number: ");
    scanf("%d",&num);
    int counts[10]={0};
    int temp=num;
    if(temp==0) counts[0]++;
    while(temp>0){
        counts[temp%10]++;
        temp/=10;
    }
    int max_freq=0, result=0;
    for(int i=0;i<10;i++){
        if(counts[i]>max_freq){ max_freq=counts[i]; result=i; }
    }
    printf("Most frequent digit: %d\n", result);
    return 0;
}
