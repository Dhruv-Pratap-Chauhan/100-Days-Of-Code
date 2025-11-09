#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf(" %[^\n]s", s);

    int max_len=0, start=0;
    for(int i=0;i<strlen(s);i++){
        int seen[256]={0}, len=0;
        for(int j=i;j<strlen(s);j++){
            if(seen[(int)s[j]]) break;
            seen[(int)s[j]]=1;
            len++;
        }
        if(len>max_len) max_len=len;
    }
    printf("Length of longest substring without repeating characters: %d\n", max_len);
    return 0;
}
