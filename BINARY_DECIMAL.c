#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    long long binary_val; // Use long long to handle larger binary inputs
    int decimal_val = 0, base = 1, rem;

    printf("Enter a binary number (containing only 0s and 1s): ");
    scanf("%lld", &binary_val);

    long long temp_binary = binary_val; // Store the original input

    // Loop to process each digit of the binary number
    while (temp_binary > 0) {
        rem = temp_binary % 10;          // Extract the rightmost digit
        decimal_val += rem * base;       // Add the digit's decimal value to the total
        temp_binary /= 10;               // Remove the rightmost digit
        base *= 2;                       // Move to the next power of 2 (positional value)
    }

    printf("The binary number %lld in decimal is: %d\n", binary_val, decimal_val);

    return 0;
}
