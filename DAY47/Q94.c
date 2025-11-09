#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50]="";
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);
    int i=0,j=0;
    while(1){
        if(str[i]==' ' || str[i]=='\0'){
            word[j]='\0';
            if(strlen(word)>strlen(longest)) strcpy(longest, word);
            j=0;
            if(str[i]=='\0') break;
        } else word[j++]=str[i];
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
