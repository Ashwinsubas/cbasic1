#include <stdio.h>

int operation(int value);  // Function declaration

int main() {
    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    result = operation(num);  // Function call
    printf("Sum of digits is %d\n", result);

    return 0;
}

int operation(int value) {
    int digit, sum = 0;

    while (value != 0) {
        digit = value % 10;     // Get last digit
        sum = sum + digit;      // Add to sum
        value = value / 10;     // Remove last digit
    }

    return sum;  // Return final sum
}
