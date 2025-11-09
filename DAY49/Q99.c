#include <stdio.h>

int main() {
    char date[20];
    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);
    printf("Formatted date: %.2s-Apr-%4s\n", date, date+6);
    return 0;
}
