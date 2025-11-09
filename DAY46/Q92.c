#include <stdio.h>
#include <string.h>

void sortString(char *s){
    int n=strlen(s);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(s[i]>s[j]){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
}

int main() {
    char str1[1000], str2[1000];
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    int n1=strlen(str1), n2=strlen(str2);
    if(str1[n1-1]=='\n') str1[n1-1]='\0';
    if(str2[n2-1]=='\n') str2[n2-1]='\0';
    sortString(str1);
    sortString(str2);
    printf("%s\n", strcmp(str1,str2)==0?"Anagrams":"Not anagrams");
    return 0;
}
