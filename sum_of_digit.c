//Write a C program, which will print two digit numbers whose sum of both digit is
//nine. e.g. 18,27,36......
#include <stdio.h>
#include <assert.h>

// Function to check if sum of digits of a two-digit number is 9
int isSumNine(int number) {
    int tens = number / 10;
    int ones = number % 10;
    return (tens + ones) == 9;
}

// Test function using assertions
void testIsSumNine() {
    assert(isSumNine(18) == 1);  // 1 + 8 = 9
    assert(isSumNine(27) == 1);  // 2 + 7 = 9
    assert(isSumNine(36) == 1);  // 3 + 6 = 9
    assert(isSumNine(45) == 1);  // 4 + 5 = 9
    assert(isSumNine(54) == 1);  // 5 + 4 = 9
    assert(isSumNine(63) == 1);  // 6 + 3 = 9
    assert(isSumNine(72) == 1);  // 7 + 2 = 9
    assert(isSumNine(81) == 1);  // 8 + 1 = 9
    assert(isSumNine(90) == 1);  // 9 + 0 = 9
    assert(isSumNine(19) == 0);  // 1 + 9 = 10, not 9
    assert(isSumNine(99) == 0);  // 9 + 9 = 18, not 9
}

int main() {
    // Run tests
    testIsSumNine();

    printf("Two-digit numbers whose digits sum to 9:\n");
    for (int num = 10; num <= 99; num++) {
        if (isSumNine(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}

