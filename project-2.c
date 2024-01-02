#include <stdio.h>

// Q: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms
// A: 4613732

int fibonacci(int number) {
    if (number <= 1) {
        return number;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int sumEvenFibonacci() {
    int sum = 0;
    int i = 0;
    int term = 1;

    while (term <= 4000000) {
        if (term % 2 == 0) {
            sum += term;
        }
        i++;
        term = fibonacci(i);
    }

    return sum;
}

int main() {
    int result = sumEvenFibonacci();

    printf("%d", result);

    return 0;
}
