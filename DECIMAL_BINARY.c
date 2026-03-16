#include <stdio.h>

int main() {
    int decimal_num, binary_array[32], i = 0, j;

    printf("Enter a positive decimal number: ");
    scanf("%d", &decimal_num);

    if (decimal_num == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Convert to binary using the division method
    while (decimal_num > 0) {
        binary_array[i] = decimal_num % 2; // Store the remainder
        decimal_num = decimal_num / 2;     // Update the number with the quotient
        i++;
    }

    // Print the binary array in reverse order
    printf("Binary equivalent: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary_array[j]);
    }
    printf("\n");

    return 0;
}
