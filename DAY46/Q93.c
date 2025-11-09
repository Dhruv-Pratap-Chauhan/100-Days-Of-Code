#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", s);
    printf("Enter second string: ");
    scanf(" %[^\n]", t);
    int count1[26]={0}, count2[26]={0};
    for(int i=0; s[i]!='\0'; i++) count1[s[i]-'a']++;
    for(int i=0; t[i]!='\0'; i++) count2[t[i]-'a']++;
    int anagram=1;
    for(int i=0;i<26;i++) if(count1[i]!=count2[i]) anagram=0;
    if(anagram) printf("Anagrams\n");
    else printf("Not anagrams\n");
    return 0;
}
