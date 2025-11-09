#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int k=0;
    char result[100];
    for(int i=0; str[i]!='\0'; i++){
        char ch=str[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
            result[k++]=ch;
    }
    result[k]='\0';
    printf("String after removing vowels: %s\n", result);
    return 0;
}
