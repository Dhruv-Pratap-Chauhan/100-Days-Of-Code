#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i=0, j;
    while(str[i]!='\0' && str[i]!='\n') i++;
    j=i-1;
    int palindrome=1;
    for(i=0;i<j;i++){
        if(str[i]!=str[j-i-1]){ palindrome=0; break; }
    }
    printf("%s\n", palindrome?"Palindrome":"Not palindrome");
    return 0;
}
