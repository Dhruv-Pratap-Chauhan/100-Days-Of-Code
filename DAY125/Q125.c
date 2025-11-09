#include <stdio.h>

int main() {
    char filename[100], text[200];
    printf("Enter filename to append: ");
    scanf("%s", filename);
    FILE *fp=fopen(filename,"a");
    if(fp==NULL){ printf("Error opening file!\n"); return 1; }
    printf("Enter text to append: ");
    getchar(); // consume newline
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
