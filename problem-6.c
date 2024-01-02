#include <stdio.h>

// Q: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
// A: 25164150

int main() {
    int sumOfSquares = 0;
    int squareOfSum = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }

    squareOfSum *= squareOfSum;

    printf("%d\n", squareOfSum - sumOfSquares);

    return 0;
}