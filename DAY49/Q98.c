#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    printf("Enter full name: ");
    fgets(name,sizeof(name),stdin);
    int i=0;
    while(name[i]!='\0' && name[i]!='\n'){
        if(i==0 || name[i-1]==' '){
            if(i!=0) printf(".");
            printf("%c", name[i]);
            while(name[i]!=' ' && name[i]!='\0' && name[i]!='\n') i++;
            if(name[i]=='\0' || name[i]=='\n') break;
        } else i++;
    }
    char *last = strrchr(name,' ');
    if(last!=NULL) printf(" %s", last+1);
    printf("\n");
    return 0;
}
