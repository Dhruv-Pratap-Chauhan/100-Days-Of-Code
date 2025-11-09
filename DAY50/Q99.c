#include <stdio.h>

int main() {
    char date[20];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);
    printf("Formatted date: ");
    for(int i=0;i<strlen(date);i++){
        if(i==3) printf("Apr");
        else if(i!=2) printf("%c", date[i]);
    }
    printf("\n");
    return 0;
}
