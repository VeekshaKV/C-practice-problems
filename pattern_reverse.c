#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX_ROWS 100
#define MAX_LINE_LEN 200

// Function to generate the pattern lines into an array of strings
// Using a single loop and calculating number of stars per row based on iteration
void generatePattern(int n, char pattern[][MAX_LINE_LEN]) {
    int totalStarsPrinted = 0;
    int currentRow = 0;
    int starsInCurrentRow = 1;

    // We want to fill n rows with increasing stars: 1, 2, ..., n
    while (currentRow < n) {
        int pos = 0;
        for (int j = 0; j < starsInCurrentRow; j++) {
            pattern[currentRow][pos++] = '*';
            pattern[currentRow][pos++] = ' ';
        }
        if (pos > 0) pos--;  // remove last space
        pattern[currentRow][pos] = '\0';
        
        currentRow++;
        starsInCurrentRow++;
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

// Test function with assertions for N=4
void testPattern() {
    char pattern[4][MAX_LINE_LEN];
    generatePattern(4, pattern);

    assert(strcmp(pattern[0], "*") == 0);
    assert(strcmp(pattern[1], "* *") == 0);
    assert(strcmp(pattern[2], "* * *") == 0);
    assert(strcmp(pattern[3], "* * * *") == 0);
}

int main() {
    int N;

    // Run tests
    testPattern();

    printf("Enter number of rows: ");
    scanf("%d", &N);

    printPattern(N);

    return 0;
}

