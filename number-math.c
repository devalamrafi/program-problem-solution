#include <stdio.h>

int main() {
    int nums[5];
    int smallest, largest;
    float average;
    int sum = 0;

    // Read 5 numbers using a loop
    printf("Enter five numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    // Initialize smallest and largest with first element
    smallest = nums[0];
    largest  = nums[0];

    // Find smallest, largest, and sum in ONE loop
    for (int i = 1; i < 5; i++) {
        if (nums[i] < smallest) smallest = nums[i];
        if (nums[i] > largest)  largest  = nums[i];
        sum += nums[i];
    }
    sum += nums[0]; // add first element to sum

    average = sum / 5.0;

    // Display results
    printf("\n─────────────────────────────\n");
    printf("Smallest: %d\n", smallest);
    printf("Largest:  %d\n", largest);
    printf("Average:  %.2f\n", average);
    printf("─────────────────────────────\n");

    return 0;
}