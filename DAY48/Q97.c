#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    printf("Enter full name: ");
    fgets(name,sizeof(name),stdin);
    int i=0;
    while(name[i]!='\0' && name[i]!='\n'){
        if(i==0 || name[i-1]==' '){
            printf("%c.", name[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
