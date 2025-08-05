//Program generate a sequence of numbers such that every number in the sequence is the sum ofthe previous three numbers. The first three numbers are 0,0,1.
#include <stdio.h>
#include <assert.h>

// Function to generate sequence where each number
// is the sum of the previous three, starting with 0,0,1
void generateSequence(int n, int sequence[]) {
    // Base cases
    if (n >= 1) sequence[0] = 0;
    if (n >= 2) sequence[1] = 0;
    if (n >= 3) sequence[2] = 1;

    for (int i = 3; i < n; i++) {
        sequence[i] = sequence[i-1] + sequence[i-2] + sequence[i-3];
    }
}

// Test function using assertions
void testSequence() {
    int seq[10];
    generateSequence(10, seq);

    // Known first 10 numbers of the sequence starting 0,0,1
    int expected[10] = {0, 0, 1, 1, 2, 4, 7, 13, 24, 44};

    for (int i = 0; i < 10; i++) {
        assert(seq[i] == expected[i]);
    }
}

int main() {
    int n;

    // Run tests
    testSequence();

    printf("Enter how many terms of the sequence to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int sequence[n];
    generateSequence(n, sequence);

    printf("Generated sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    return 0;
}

