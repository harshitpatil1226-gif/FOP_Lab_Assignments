#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, n = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    // Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    // Check Armstrong
    if ((int)sum == original) {
        printf("\n%d is an Armstrong number.\n", original);
    } else {
        printf("\n%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}
