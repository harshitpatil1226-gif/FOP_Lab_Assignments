//Menu driven program to allow user to perform simple arithmatic operatins like addition subtraction and multiplication
#include <stdio.h>
int main() {
    int x;
    int y;
    char choice;
    printf("Select an operator (+, -, *, /): ", choice);
    scanf(" %c", &choice);
    printf("Enter the first integer: ",x);
    scanf("%d", &x);
    printf("Enter the second integer: ",y);
    scanf("%d", &y);

    switch (choice) {
        case '+':
            printf("Result: %d\n", x + y);
            break;
        
        case '-':
            printf("Result: %d\n", x - y);
            break;

        case '*':
            printf("Result: %d\n", x * y);
            break;

        case '/':
            if (y != 0) {
                printf("Result: %d\n", x / y);
            } else {
                printf("Error: Division by zero\n");
            }
            break;

        default:
            printf("Invalid operator\n");

    }
    return 0;
}
