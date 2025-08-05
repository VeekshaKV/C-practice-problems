//Program that asks the user to enter a number and returns if it is Armstrong or not.
#include <stdio.h>
#include <assert.h>

//Checks whether a number is an Armstrong number.
int is_armstrong(int number) {
    int original = number;
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }
    return sum == original;
}

void test_is_armstrong() {
    assert(is_armstrong(153) == 1);
    assert(is_armstrong(370) == 1);
    assert(is_armstrong(371) == 1);
    assert(is_armstrong(407) == 1);
    assert(is_armstrong(123) == 0);
}

int main() {
    test_is_armstrong();
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (is_armstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);
    return 0;
}

