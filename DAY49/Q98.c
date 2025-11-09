#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    scanf(" %[^\n]", name);
    int n=strlen(name);
    int last_space=-1;
    for(int i=n-1;i>=0;i--){
        if(name[i]==' '){ last_space=i; break; }
    }
    printf("Initials with surname: ");
    printf("%c.", name[0]);
    for(int i=0;i<last_space;i++){
        if(name[i]==' ' && name[i+1]!=' ' && i+1<last_space) printf("%c.", name[i+1]);
    }
    printf(" %s\n", name+last_space+1);
    return 0;
}
