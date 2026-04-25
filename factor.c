#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }

    printf("Factors of %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}