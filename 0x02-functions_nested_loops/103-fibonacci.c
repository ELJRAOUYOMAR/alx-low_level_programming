#include <stdio.h>

int main() {
    long int prev = 1;
    long int current = 2;
    long int sum = 0;

    while (current <= 4000000) {
        if (current % 2 == 0) {
            sum += current;
        }

        long int next = prev + current;
        prev = current;
        current = next;
    }

    printf("%ld\n", sum);

    return 0;
}
