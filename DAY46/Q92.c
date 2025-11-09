#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int freq[26]={0};
    char first='\0';
    for(int i=0; str[i]!='\0'; i++){
        char ch=str[i];
        if(ch>='a' && ch<='z'){
            freq[ch-'a']++;
            if(freq[ch-'a']==2){ first=ch; break; }
        }
    }
    if(first) printf("First repeating lowercase letter: %c\n", first);
    else printf("No repeating lowercase letter\n");
    return 0;
}
