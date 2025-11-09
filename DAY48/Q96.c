#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end){
    while(start<end){
        char t=*start;
        *start=*end;
        *end=t;
        start++; end--;
    }
}

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    int i=0, start=0;
    while(1){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\0'){
            reverseWord(str+start, str+i-1);
            start=i+1;
            if(str[i]=='\n' || str[i]=='\0') break;
        }
        i++;
    }
    printf("Sentence with reversed words: %s", str);
    return 0;
}
