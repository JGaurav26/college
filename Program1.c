#include <stdio.h>

int main() {
    float num1, num2;
    
    // Input two floating-point numbers
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);
    
    // Perform arithmetic operations
    printf("Results of arithmetic operations on %.2f and %.2f:\n", num1, num2);
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    
    // Check for division by zero
    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division: Division by zero is undefined.\n");
    }

    // Check for modulo operation with non-integer values
    printf("Modulo operation cannot be performed on floating-point numbers.\n");

    return 0;
}
