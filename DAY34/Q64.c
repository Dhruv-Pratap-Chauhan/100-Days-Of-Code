#include <stdio.h>

int main() {
    int num, digit, maxCount=0, mostDigit=0, count[10]={0};
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        digit=temp%10;
        count[digit]++;
        temp/=10;
    }
    for(int i=0;i<10;i++){
        if(count[i]>maxCount){
            maxCount=count[i];
            mostDigit=i;
        }
    }
    printf("Digit that occurs most: %d\n", mostDigit);
    return 0;
}
