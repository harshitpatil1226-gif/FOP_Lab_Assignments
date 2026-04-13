#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    if (op == '+')
        printf("Result = %.2lf\n", a + b);
    else if (op == '-')
        printf("Result = %.2lf\n", a - b);
    else if (op == '*')
        printf("Result = %.2lf\n", a * b);
    else if (op == '/')
        if (b == 0)
            printf("Error: Division by zero!\n");
        else
            printf("Result = %.2lf\n", a / b);
    else
        printf("Invalid operator!\n");

    return 0;
}
