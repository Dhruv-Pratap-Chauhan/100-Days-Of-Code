#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int vowels=0, consonants=0;
    FILE *fp=fopen("text.txt","r");
    if(fp==NULL){ printf("Error opening file!\n"); return 1; }
    while((c=fgetc(fp))!=EOF){
        if(isalpha(c)){
            char lc=tolower(c);
            if(lc=='a'||lc=='e'||lc=='i'||lc=='o'||lc=='u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
