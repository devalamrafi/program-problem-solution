#include <stdio.h>
#include <math.h>

// Check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    // Only check up to √n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int count = 0;  // how many primes found
    int num = 2;    // start checking from 2

    printf("First 100 Prime Numbers:\n");
    printf("─────────────────────────────────────────\n");

    while (count < 100) {
        if (isPrime(num)) {
            printf("%4d", num);   // print prime, width 4
            count++;

            // New line every 10 primes for readability
            if (count % 10 == 0)
                printf("\n");
        }
        num++;
    }

    printf("─────────────────────────────────────────\n");
    printf("Total primes printed: %d\n", count);

    return 0;
}