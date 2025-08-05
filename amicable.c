//Program to check that the input pair of numbers is amicable#include <stdio.h>
#include<assert.h>
#include<stdio.h>

// Calculates the sum of all proper divisors (excluding the number itself).
int sum_of_proper_divisors(int number) {
    if (number <= 0) return 0; // Defensive check

    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0)
            sum += i;
    }
    return sum;
}

// Checks if two numbers are amicable.
// Returns 1 if they are, 0 otherwise.
// Amicable numbers must be distinct numbers.
int are_amicable(int num1, int num2) {
    if (num1 <= 0 || num2 <= 0) return 0;   // Invalid input check

    if (num1 == num2) return 0;

    int sum1 = sum_of_proper_divisors(num1);
    int sum2 = sum_of_proper_divisors(num2);

    return (sum1 == num2 && sum2 == num1);
}

void test_amicable() {
    assert(are_amicable(220, 284) == 1);    // Known amicable pair
    assert(are_amicable(1184, 1210) == 1);  // Another known pair
    assert(are_amicable(10, 20) == 0);      // Not amicable
    assert(are_amicable(6, 6) == 0);        // Perfect number, not amicable
}

int main() {
    test_amicable();

    int number1, number2;

    printf("Enter two positive integers to check if they are amicable: ");
    if (scanf("%d %d", &number1, &number2) != 2) {
        printf("Invalid input! Please enter two integers.\n");
        return 1;
    }
    if (number1 <= 0 || number2 <= 0) {
        printf("Please enter two positive integers.\n");
        return 1;
    }

    if (are_amicable(number1, number2)) {
        printf("%d and %d are amicable numbers.\n", number1, number2);
    } else {
        // Special message for identical numbers that might be perfect
        if (number1 == number2) {
            printf("%d is a perfect number (sum of its proper divisors equals itself),\n"
                   "but two identical numbers are not considered amicable.\n", number1);
        } else {
            printf("%d and %d are not amicable numbers.\n", number1, number2);
        }
    }

    return 0;
}


