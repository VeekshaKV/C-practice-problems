//Program to generate the first 'N' prime numbers.
#include<stdio.h>
#include<assert.h>

//Checks whether a number is prime.
int is_prime(int number) {
    if (number < 2) return 0;
    for (int i = 2; i * i <= number; i++)
        if (number % i == 0)
            return 0;
    return 1;
}

//Prints first N prime numbers.

void print_first_n_primes(int n) {
    int count = 0, number = 2;
    while (count < n) {
        if (is_prime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
}

void test_is_prime() {
    assert(is_prime(2) == 1);
    assert(is_prime(3) == 1);
    assert(is_prime(4) == 0);
    assert(is_prime(11) == 1);
    assert(is_prime(15) == 0);
}

int main() {
    test_is_prime();
    int n;
    printf("Enter the number of primes to print: ");
    scanf("%d", &n);
    print_first_n_primes(n);
    return 0;
}


