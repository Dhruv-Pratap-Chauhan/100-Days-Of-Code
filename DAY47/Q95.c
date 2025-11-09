#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);
    strcat(s1, s1); // concatenate s1 to itself
    if(strstr(s1,s2)) printf("Rotation\n");
    else printf("Not rotation\n");
    return 0;
}
