#include <stdio.h>
#include <stdbool.h>

// Q: What is the smallest positive number that is evenly divisible by all the numbers from 1 to 20
// A: 232792560

int main() {
    int i = 1;
    int j;

    while (true) {
        for (j = 1; j <= 20; j++) {
            if (i % j != 0) {
                break;
            }
        }

        if (j == 21) {
            break;
        }

        i++;
    }

    printf("%d\n", i);

    return 0;
}