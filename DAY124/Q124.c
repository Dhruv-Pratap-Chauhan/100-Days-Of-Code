#include <stdio.h>

int main() {
    char src[100], dest[100], c;
    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fsrc=fopen(src,"r");
    if(fsrc==NULL){ printf("Error opening source file!\n"); return 1; }
    FILE *fdest=fopen(dest,"w");
    if(fdest==NULL){ printf("Error opening destination file!\n"); return 1; }

    while((c=fgetc(fsrc))!=EOF) fputc(c, fdest);

    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
