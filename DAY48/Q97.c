#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    scanf(" %[^\n]", name);
    int n=strlen(name);
    printf("Initials: ");
    printf("%c.", name[0]);
    for(int i=0;i<n;i++){
        if(name[i]==' ' && name[i+1]!='\0') printf("%c.", name[i+1]);
    }
    printf("\n");
    return 0;
}
