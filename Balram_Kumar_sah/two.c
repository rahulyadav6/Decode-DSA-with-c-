#include <stdio.h>

int main() {
    int numbers[10];

    // Input 10 different numbers
    printf("Enter 10 different numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display numbers with their addresses
    printf("\n=========================================\n");
    printf(" Number   |    Memory Address\n");
    printf("=========================================\n");
    for (int i = 0; i < 10; i++) {
        printf("  %d      |    %p\n", numbers[i], (void*)&numbers[i]);
    }
    printf("=========================================\n");

    return 0;
}
