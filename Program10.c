#include <stdio.h>
#include <string.h>

// Define a union to store an integer, a float, or a string
union Data {
    int intValue;
    float floatValue;
    char strValue[50];
};

int main() {
    union Data data;  // Declare the union variable
    int choice;

    // Menu to choose the type of data to store
    printf("Choose the type of data to store:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. String\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Store and display data based on user's choice
    switch (choice) {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &data.intValue);
            printf("Stored integer: %d\n", data.intValue);
            break;
        case 2:
            printf("Enter a float: ");
            scanf("%f", &data.floatValue);
            printf("Stored float: %.2f\n", data.floatValue);
            break;
        case 3:
            printf("Enter a string: ");
            scanf("%s", data.strValue);
            printf("Stored string: %s\n", data.strValue);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
