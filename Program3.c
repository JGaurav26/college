#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    // Input the value of n
    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

    // Continue until we find n prime numbers
    while (count < n) {
        int isPrime = 1;  // Assume the number is prime

        // Check if num is prime
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // num is not prime
                break;
            }
        }

        // If num is prime, print it and increase the count
        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        // Move to the next number
        num++;
    }

    printf("\n");

    return 0;
}
