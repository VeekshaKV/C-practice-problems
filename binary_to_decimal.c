// Program to convert a binary number to decimal and vice versa.#include <stdio.h>
#include <assert.h>
#include<stdio.h>

// Function to convert binary number (input as integer) to decimal
int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;  // 2^0

    while (binary > 0) {
        int lastDigit = binary % 10;
        assert(lastDigit == 0 || lastDigit == 1);  // Validate binary digit

        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

// Function to convert decimal number to binary (returns binary as integer)
int decimalToBinary(int decimal) {
    int binary = 0;
    int place = 1;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * place;
        decimal /= 2;
        place *= 10;
    }
    return binary;
}

// Test the conversion functions
void testConversions() {
    // binaryToDecimal tests
    assert(binaryToDecimal(0) == 0);
    assert(binaryToDecimal(1) == 1);
    assert(binaryToDecimal(10) == 2);
    assert(binaryToDecimal(101) == 5);
    assert(binaryToDecimal(1111) == 15);

    // decimalToBinary tests
    assert(decimalToBinary(0) == 0);
    assert(decimalToBinary(1) == 1);
    assert(decimalToBinary(2) == 10);
    assert(decimalToBinary(5) == 101);
    assert(decimalToBinary(15) == 1111);
}

int main() {
    int choice, number;

    // Run tests before starting
    testConversions();

    printf("Choose conversion:\n1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number (e.g. 1011): ");
        scanf("%d", &number);
        int decimal = binaryToDecimal(number);
        printf("Decimal equivalent: %d\n", decimal);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        int binary = decimalToBinary(number);
        printf("Binary equivalent: %d\n", binary);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}


