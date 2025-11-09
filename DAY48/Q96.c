#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);
    int start=0,i;
    for(i=0; ;i++){
        if(str[i]==' ' || str[i]=='\0'){
            for(int j=i-1;j>=start;j--) printf("%c", str[j]);
            if(str[i]==' ') printf(" ");
            start=i+1;
        }
        if(str[i]=='\0') break;
    }
    printf("\n");
    return 0;
}
