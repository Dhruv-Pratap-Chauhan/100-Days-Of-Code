#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    int n=strlen(str), palindrome=1;
    for(int i=0;i<n/2;i++)
        if(str[i]!=str[n-1-i]) palindrome=0;
    if(palindrome) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}
