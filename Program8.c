#include <stdio.h>

// Define a structure for storing student information
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    int n, i;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of structures
    struct Student students[n];

    // Input details of each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    // Display the details of each student
    printf("\nDisplaying student information:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
    }

    return 0;
}
