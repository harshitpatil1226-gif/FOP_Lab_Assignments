#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x, sum = 0, term;

    printf("Enter the angle (in degrees): ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Convert degrees to radians
    double rad = x * (3.14159265 / 180);

    for (i = 0; i < n; i++) {
        term = pow(-1, i) * pow(rad, 2*i+1) / tgamma(2*i+2);
        sum += term;
    }

    printf("\nsin(%.2lf) = %.6lf\n", x, sum);
    printf("Actual    = %.6lf\n", sin(rad));

    return 0;
}
