//program to display and find the sum of the series 1+11+111+....111 up to n.
#include <stdio.h>
#include <assert.h>


 // Returns the sum of the series: 1 + 11 + 111 + ... n terms

long long sum_series(int n) {
    long long term = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        term = term * 10 + 1;
        sum += term;
    }
    return sum;
}

void test_sum_series() {
    assert(sum_series(1) == 1);
    assert(sum_series(2) == 12);     // 1 + 11
    assert(sum_series(3) == 123);    // 1 + 11 + 111
    assert(sum_series(4) == 1234);   // 1 + 11 + 111 + 1111
}

int main() {
    test_sum_series();
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    long long total = sum_series(n);
    printf("Sum of the series: %lld\n", total);
    return 0;
}

