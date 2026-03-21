#include <stdio.h>

int main() {
    int numbers[10];
    int max, min;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Initialize max and min with the first number
        if (i == 0) {
            max = min = numbers[i];
        } else {
            // Update max and min
            if (numbers[i] > max) {
                max = numbers[i];
            }
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }
    }

    // Display results
    printf("\n====================================\n");
    printf("Largest Number: %d\n", max);
    printf("Smallest Number: %d\n", min);
    printf("====================================\n");

    return 0;
}
