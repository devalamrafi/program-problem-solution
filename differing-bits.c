#include <stdio.h>

// Count number of set bits (1s) in a number
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;  // check last bit
        n >>= 1;         // shift right
    }
    return count;
}

int hammingDistance(int a, int b) {
    return countSetBits(a ^ b);  // XOR then count differing bits
}

int main() {
    int a, b;

    printf("Enter two positive integers:\n");
    printf("A = "); scanf("%d", &a);
    printf("B = "); scanf("%d", &b);

    if (a < 0 || b < 0) {
        printf("Error: Please enter positive integers.\n");
        return 1;
    }

    printf("\nA = %d  →  Binary: ", a);
    for (int i = 7; i >= 0; i--) printf("%d", (a >> i) & 1);

    printf("\nB = %d  →  Binary: ", b);
    for (int i = 7; i >= 0; i--) printf("%d", (b >> i) & 1);

    printf("\nXOR     →  Binary: ");
    for (int i = 7; i >= 0; i--) printf("%d", ((a ^ b) >> i) & 1);

    printf("\n\nBits that need to change: %d\n", hammingDistance(a, b));

    return 0;
}