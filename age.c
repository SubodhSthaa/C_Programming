#include <stdio.h>
int main() {
    int ages[30];
    int i, largest, second_largest;

    // Input ages of 30 employees
    printf("Enter the ages of 30 employees:\n");
    for (i = 0; i < 30; i++) {
        printf("Employee %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    // Initialize largest and second largest
    largest = second_largest = -1;

    // Find the largest age
    for (i = 0; i < 30; i++) {
        if (ages[i] > largest) {
            second_largest = largest;
            largest = ages[i];
        } else if (ages[i] > second_largest && ages[i] < largest) {
            second_largest = ages[i];
        }
        printf("The second largest age is: %d\n", second_largest);
    }
    return 0;
}
