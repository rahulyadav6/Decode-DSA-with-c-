#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int product = 1;
    int max = 0;
    float average;

    // Input phase
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Calculate sum
        sum += numbers[i];

        // Calculate product
        product *= numbers[i];

        // Find maximum
        if (i == 0 || numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Calculate average
    average = (float)sum / 10;

    // Output phase
    printf("\nSum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);
    printf("Maximum number: %d\n", max);

    return 0;
}
