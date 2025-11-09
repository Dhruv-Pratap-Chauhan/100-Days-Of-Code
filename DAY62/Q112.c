#include <stdio.h>

int main() {
    int num, count[10]={0};
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        int d=temp%10;
        count[d]++;
        temp/=10;
    }
    int maxCount=0, digit=0;
    for(int i=0;i<10;i++){
        if(count[i]>maxCount){
            maxCount=count[i];
            digit=i;
        }
    }
    printf("Most frequent digit: %d\n", digit);
    return 0;
}
