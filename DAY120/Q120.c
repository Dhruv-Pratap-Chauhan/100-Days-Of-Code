#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    scanf(" %[^\n]s", str);

    for(int i=0;i<strlen(str);i++){
        if(i==0 || str[i-1]==' ') str[i]=toupper(str[i]);
        else str[i]=tolower(str[i]);
    }
    printf("Sentence case: %s\n", str);
    return 0;
}
