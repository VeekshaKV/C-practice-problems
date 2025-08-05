// C Program to read no of units(electricity) consumed and print out total charge amount#include <stdio.h>
#include <assert.h>
#include<stdio.h>

// Function to calculate electricity bill based on units consumed
int calculateElectricityBill(int unitsConsumed) {
    int totalCharge = 0;

    if (unitsConsumed <= 200) {
        totalCharge = unitsConsumed * 5;
    } else if (unitsConsumed <= 300) {
        // First 200 units at Rs 5
        totalCharge = 200 * 5;
        // Remaining units (unitsConsumed - 200) at Rs 7
        totalCharge += (unitsConsumed - 200) * 7;
    } else {
        // First 200 units at Rs 5
        totalCharge = 200 * 5;
        // Next 100 units at Rs 7
        totalCharge += 100 * 7;
        // Units beyond 300 at Rs 10
        totalCharge += (unitsConsumed - 300) * 10;
    }

    return totalCharge;
}

// Function to test calculateElectricityBill with assertions
void testCalculateElectricityBill() {
    assert(calculateElectricityBill(0) == 0);
    assert(calculateElectricityBill(100) == 100 * 5);        // Only first slab
    assert(calculateElectricityBill(200) == 200 * 5);        // Edge of first slab
    assert(calculateElectricityBill(250) == (200 * 5) + (50 * 7));  // Middle slab
    assert(calculateElectricityBill(300) == (200 * 5) + (100 * 7)); // Edge of second slab
    assert(calculateElectricityBill(350) == (200 * 5) + (100 * 7) + (50 * 10)); // Beyond 300 units
}

int main() {
    int unitsConsumed;

    // Test the billing function
    testCalculateElectricityBill();

    // Read number of units consumed from user
    printf("Enter number of units consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate total charge
    int totalCharge = calculateElectricityBill(unitsConsumed);

    // Display the result
    printf("Total charge for %d units = Rs %d\n", unitsConsumed, totalCharge);

    return 0;
}

