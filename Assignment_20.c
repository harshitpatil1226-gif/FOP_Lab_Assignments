#include <stdio.h>

// Swap WITHOUT pointers
void swapWithout(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swap (Without Pointers): a = %d, b = %d\n", a, b);
}

// Swap WITH pointers
void swapWith(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    // Without pointers
    swapWithout(a, b);
    printf("(Original unchanged in main)\n");

    // With pointers
    swapWith(&a, &b);
    printf("After Swap  (With Pointers)   : a = %d, b = %d\n", a, b);

    return 0;
}
