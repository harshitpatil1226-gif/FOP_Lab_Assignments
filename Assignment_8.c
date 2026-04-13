#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0;
    float aggregate;
    int passed = 1;

    printf("Enter marks for 5 courses:\n");
    for (i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 40) {
            passed = 0;
        }
    }

    if (!passed) {
        printf("\nResult: FAIL\n");
    } else {
        aggregate = (total / 500.0) * 100;
        printf("\nTotal Marks: %d/500\n", total);
        printf("Aggregate: %.2f%%\n", aggregate);

        if (aggregate >= 75) {
            printf("Grade: Distinction\n");
        } else if (aggregate >= 60) {
            printf("Grade: First Division\n");
        } else if (aggregate >= 50) {
            printf("Grade: Second Division\n");
        } else {
            printf("Grade: Third Division\n");
        }
    }

    return 0;
}
