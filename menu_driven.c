//A menu driven program to read two integers & find their sum, difference & product.
#include <stdio.h>
#include <assert.h>

// Function to calculate sum of two integers
int calculate_sum(int a, int b) {
    return a + b;
}

// Function to calculate difference (a - b)
int calculate_difference(int a, int b) {
    return a - b;
}

// Function to calculate product of two integers
int calculate_product(int a, int b) {
    return a * b;
}

// Function to run simple tests using assertions
void test_operations() {
    assert(calculate_sum(5, 3) == 8);
    assert(calculate_difference(5, 3) == 2);
    assert(calculate_product(5, 3) == 15);
    assert(calculate_sum(-1, 1) == 0);
    assert(calculate_difference(0, 0) == 0);
    assert(calculate_product(0, 10) == 0);
}

int main() {
    test_operations();

    int num1, num2, choice;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Sum\n");
        printf("2. Difference (num1 - num2)\n");
        printf("3. Product\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Sum of %d and %d is %d\n", num1, num2, calculate_sum(num1, num2));
                break;
            case 2:
                printf("Difference ( %d - %d ) is %d\n", num1, num2, calculate_difference(num1, num2));
                break;
            case 3:
                printf("Product of %d and %d is %d\n", num1, num2, calculate_product(num1, num2));
                break;
            case 4:
                printf("Exiting program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please enter 1-4.\n");
        }
    }

    return 0;
}


