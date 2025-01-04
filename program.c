#include <stdio.h>

// Function prototypes
void towerOfHanoi(int n, char source, char target, char auxiliary, int *step);

int main() {
    int n;
    int step = 0;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of disks must be greater than 0.\n");
        return 1;
    }

    printf("\nSteps to solve Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B', &step);

    printf("\nTotal steps: %d\n", step);
    return 0;
}

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char target, char auxiliary, int *step) {
    if (n == 1) {
        // Base case: Move a single disk directly
        (*step)++;
        printf("Step %d: Move disk 1 from %c to %c\n", *step, source, target);
        return;
    }

    // Recursive case: Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, target, step);

    // Move the nth disk from source to target
    (*step)++;
    printf("Step %d: Move disk %d from %c to %c\n", *step, n, source, target);

    // Move the n-1 disks from auxiliary to target
    towerOfHanoi(n - 1, auxiliary, target, source, step);
}
