#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int count=0;
    for(int i=0; str[i]!='\0'; i++) count++;
    printf("Number of characters: %d\n", count);
    return 0;
}
