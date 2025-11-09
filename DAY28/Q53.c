#include <stdio.h>

int main() {
    int n = 5;
    for(int i = 0; i < 9; i++){
        int stars = i < 5 ? 2*i + 1 : 2*(8-i) + 1;
        for(int j = 0; j < stars; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
