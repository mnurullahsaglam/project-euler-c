#include <stdio.h>

// Q: Find the sum of all the multiples of 3 or 5 below 1000.
// A: 233168
int main() {
    int multiplySum = 0;

    for (int i = 0; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            multiplySum += i;
        }
    }

    printf("%d", multiplySum);
}
