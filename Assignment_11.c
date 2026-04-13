#include <stdio.h>
#include <math.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    // a) Square Root
    printf("\na) Square Root  = %.2f", sqrt(num));

    // b) Square
    printf("\nb) Square       = %d", num * num);

    // c) Cube
    printf("\nc) Cube         = %d", num * num * num);

    // d) Prime Check
    int isPrime = 1;
    if (num < 2) isPrime = 0;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf("\nd) Prime Check  = %s", isPrime ? "Prime" : "Not Prime");

    // e) Factorial
    long long fact = 1;
    for (i = 1; i <= num; i++)
        fact *= i;
    printf("\ne) Factorial    = %lld", fact);

    // f) Prime Factors
    printf("\nf) Prime Factors= ");
    int temp = num;
    for (i = 2; i <= temp; i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }

    printf("\n");
    return 0;
}
