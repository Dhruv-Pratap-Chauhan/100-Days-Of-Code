#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int chars=0, words=0, lines=0, inWord=0;
    FILE *fp = fopen("sample.txt", "r");
    if(fp == NULL){
        printf("Error: File does not exist!\n");
        return 1;
    }
    while((c=fgetc(fp))!=EOF){
        chars++;
        if(c=='\n') lines++;
        if(isspace(c)) inWord=0;
        else if(!inWord){ words++; inWord=1; }
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
