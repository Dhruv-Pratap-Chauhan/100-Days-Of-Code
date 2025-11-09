#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    printf("Enter first string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter second string: ");
    fgets(s2,sizeof(s2),stdin);
    int n1=strlen(s1), n2=strlen(s2);
    if(s1[n1-1]=='\n') s1[n1-1]='\0';
    if(s2[n2-1]=='\n') s2[n2-1]='\0';
    char temp[2000];
    strcpy(temp,s1);
    strcat(temp,s1);
    printf("%s\n", strstr(temp,s2)!=NULL?"Rotation":"Not rotation");
    return 0;
}
