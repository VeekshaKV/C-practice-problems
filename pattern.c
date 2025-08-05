//WAP to print the following sketch with input N as number of rows

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX_ROWS 100
#define MAX_LINE_LEN 200

// Function to generate the pattern lines into an array of strings
void generatePattern(int n, char pattern[][MAX_LINE_LEN]) {
    for (int i = 0; i < n; i++) {
        int stars = n - i;
        int pos = 0;
        for (int j = 0; j < stars; j++) {
            pattern[i][pos++] = '*';
            pattern[i][pos++] = ' ';
        }
        if (pos > 0) pos--;  // remove last space
        pattern[i][pos] = '\0'; // null terminate string
    }
}

// Function to print the pattern lines
void printPattern(int n) {
    char pattern[n][MAX_LINE_LEN];
    generatePattern(n, pattern);

    for (int i = 0; i < n; i++) {
        printf("%s\n", pattern[i]);
    }
}

// Test function with assertions
void testPattern() {
    char pattern[4][MAX_LINE_LEN];
    generatePattern(4, pattern);

    assert(strcmp(pattern[0], "* * * *") == 0);
    assert(strcmp(pattern[1], "* * *") == 0);
    assert(strcmp(pattern[2], "* *") == 0);
    assert(strcmp(pattern[3], "*") == 0);
}

int main() {
    int N;

    // Run assertions tests
    testPattern();

    printf("Enter number of rows: ");
    scanf("%d", &N);

    printPattern(N);

    return 0;
}

