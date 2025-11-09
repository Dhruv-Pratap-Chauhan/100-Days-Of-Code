#include <stdio.h>

int main() {
    int n = 5;
    for(int i=1;i<=2*n-1;i+=2){
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(int i=2*n-3;i>=1;i-=2){
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
