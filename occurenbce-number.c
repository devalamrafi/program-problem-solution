#include 

int main() {
    int n, d;
    int count = 0;
    int temp;

    printf("Enter a number (n): ");
    scanf("%d", &n);
    printf("Enter the digit to find (d): ");
    scanf("%d", &d);

    // Validate digit input
    if (d < 0 || d > 9) {
        printf("Error: Digit must be between 0 and 9.\n");
        return 1;
    }

    temp = n;

    // Extract last digit and compare with d
    while (temp > 0) {
        int lastDigit = temp % 10;  // get last digit
        if (lastDigit == d) {
            count++;  // increment if matches
        }
        temp = temp / 10;  // remove last digit
    }

    printf("\n─────────────────────────────────────\n");
    printf("Number (n): %d\n", n);
    printf("Digit to find (d): %d\n", d);
    printf("Occurrences: %d\n", count);
    printf("─────────────────────────────────────\n");

    return 0;
}