#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    printf("Enter string s: ");
    scanf(" %[^\n]s", s);
    printf("Enter string t: ");
    scanf(" %[^\n]s", t);

    int count[26]={0};
    for(int i=0;i<strlen(s);i++) count[s[i]-'a']++;
    for(int i=0;i<strlen(t);i++) count[t[i]-'a']--;
    int flag=1;
    for(int i=0;i<26;i++) if(count[i]!=0){ flag=0; break; }

    printf("%s\n", flag?"Anagram":"Not Anagram");
    return 0;
}
