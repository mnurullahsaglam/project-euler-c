#include <stdio.h>
#include <stdbool.h>

// Q: What is the 10001st prime number?
// A: 104743

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int primeNumberCount = 0;
    int number = 1;
    int target = 10001;

    while (primeNumberCount < target) {
        if (isPrime(number)) {
            primeNumberCount++;
        }

        if (primeNumberCount == target) {
            break;
        }

        number++;
    }

    printf("%d\n", number);

    return 0;
}
