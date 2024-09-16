#include <stdio.h>

// Function prototypes
int gcd_iterative(int a, int b);
int gcd_recursive(int a, int b);
int lcm(int a, int b, int gcd);

int main() {
    int num1, num2, gcdIter, gcdRec, lcmResult;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD using iterative method
    gcdIter = gcd_iterative(num1, num2);
    printf("GCD (Iterative) of %d and %d is: %d\n", num1, num2, gcdIter);

    // Calculate GCD using recursive method
    gcdRec = gcd_recursive(num1, num2);
    printf("GCD (Recursive) of %d and %d is: %d\n", num1, num2, gcdRec);

    // Calculate LCM using GCD
    lcmResult = lcm(num1, num2, gcdIter);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcmResult);

    return 0;
}

// Iterative function to find GCD (Euclidean Algorithm)
int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Recursive function to find GCD (Euclidean Algorithm)
int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd_recursive(b, a % b);
    }
}

// Function to find LCM using GCD
int lcm(int a, int b, int gcd) {
    return (a * b) / gcd;
}
