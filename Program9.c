#include <stdio.h>
#include <stdlib.h>

// Define the Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function to write employee records to a binary file
void writeEmployeesToFile(struct Employee emp[], int n) {
    FILE *file = fopen("employees.bin", "wb");  // Open binary file for writing
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fwrite(emp, sizeof(struct Employee), n, file);  // Write the array to file
    fclose(file);  // Close the file
}

// Function to read employee records from a binary file
void readEmployeesFromFile(int n) {
    FILE *file = fopen("employees.bin", "rb");  // Open binary file for reading
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    struct Employee emp[n];

    fread(emp, sizeof(struct Employee), n, file);  // Read the array from file
    fclose(file);  // Close the file

    // Display the employee information
    printf("\nEmployee Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("\n");
    }
}

int main() {
    int n;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Create an array of Employee structures
    struct Employee emp[n];

    // Input details of each employee
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Write employee records to the binary file
    writeEmployeesToFile(emp, n);

    // Read employee records from the binary file and display
    readEmployeesFromFile(n);

    return 0;
}
