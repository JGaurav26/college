#include <stdio.h>

int main() {
    int year;
    
    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Check if the year is a leap year using nested if-else
    if (year % 4 == 0) {
        // If divisible by 4, check if divisible by 100
        if (year % 100 == 0) {
            // If divisible by 100, check if divisible by 400
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
