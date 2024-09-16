#include <stdio.h>
#include <stdlib.h> // For malloc() and free()

int main() {
    int n, i;
    int *arr;
    int sum = 0;
    float average;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int*) malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum while inputting
    }

    // Calculate average
    average = (float)sum / n;

    // Display the results
    printf("Sum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);

    // Free the allocated memory
    free(arr);

    return 0;
}
