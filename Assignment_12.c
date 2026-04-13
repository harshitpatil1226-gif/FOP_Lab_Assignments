#include <stdio.h>

int main() {
    int a, b, i;
    int gcd, lcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // GCD
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    // LCD (LCM)
    lcd = (a * b) / gcd;

    printf("Smallest Common Divisor (GCD) = %d\n", gcd);
    printf("Greatest Common Divisor (LCM) = %d\n", lcd);

    return 0;
}
