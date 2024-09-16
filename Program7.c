#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char str[]);
int isPalindrome(char str[]);
void countFrequency(char str[]);

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    gets(str);  // Read string with spaces

    // Reverse the string
    printf("\nReversed string: ");
    reverseString(str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("\nThe string is a palindrome.\n");
    } else {
        printf("\nThe string is not a palindrome.\n");
    }

    // Count the frequency of each character
    printf("\nFrequency of each character:\n");
    countFrequency(str);

    return 0;
}

// Function to reverse the string
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to check if the string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    
    while (i < j) {
        // Ignore spaces and make it case-insensitive
        if (!isalnum(str[i])) {
            i++;
        } else if (!isalnum(str[j])) {
            j--;
        } else if (tolower(str[i]) != tolower(str[j])) {
            return 0; // Not a palindrome
        } else {
            i++;
            j--;
        }
    }
    return 1; // Is a palindrome
}

// Function to count the frequency of each character
void countFrequency(char str[]) {
    int freq[256] = {0};  // ASCII has 256 characters

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {  // Consider only alphanumeric characters
            freq[(int)tolower(str[i])]++;
        }
    }

    // Display the frequency of each character
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}
