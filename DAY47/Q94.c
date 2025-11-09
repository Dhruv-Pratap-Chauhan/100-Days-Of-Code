#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    int maxLen=0, len=0, start=0, maxStart=0, i=0;
    while(1){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\0'){
            if(len>maxLen){ maxLen=len; maxStart=start; }
            len=0; start=i+1;
            if(str[i]=='\n' || str[i]=='\0') break;
        } else len++;
        i++;
    }
    for(i=maxStart;i<maxStart+maxLen;i++) printf("%c", str[i]);
    printf("\n");
    return 0;
}
