#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    FILE *fin=fopen("input.txt","r");
    FILE *fout=fopen("output.txt","w");
    if(fin==NULL || fout==NULL){ printf("Error opening file!\n"); return 1; }
    while((c=fgetc(fin))!=EOF){
        fputc(toupper(c), fout);
    }
    fclose(fin);
    fclose(fout);
    printf("File converted to uppercase and written to output.txt\n");
    return 0;
}
