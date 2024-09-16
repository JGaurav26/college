#include <stdio.h>

int main() {
    int n, i, element, found = 0, frequency = 0;
    int max, min;
    int sum = 0;
    float average;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Calculate sum while inputting
    }

    // Input the element to be searched and for frequency count
    printf("Enter the element to search for: ");
    scanf("%d", &element);

    // Initialize max and min to the first element of the array
    max = min = arr[0];

    // Traverse the array to find max, min, and frequency
    for (i = 0; i < n; i++) {
        // Search for the given element
        if (arr[i] == element) {
            found = 1;
            frequency++;
        }

        // Find maximum element
        if (arr[i] > max) {
            max = arr[i];
        }

        // Find minimum element
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Calculate average
    average = (float)sum / n;

    // Output the results
    if (found) {
        printf("Element %d is found in the array.\n", element);
    } else {
        printf("Element %d is not found in the array.\n", element);
    }

    printf("Frequency of element %d in the array: %d\n", element, frequency);
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);
    printf("Average of the elements in the array: %.2f\n", average);

    return 0;
}
