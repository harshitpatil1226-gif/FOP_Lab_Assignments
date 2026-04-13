#include <stdio.h>

int main() {
    int n, i;
    int even[100], odd[100];
    int ec = 0, oc = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Partition into even and odd
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[ec++] = arr[i];
        else
            odd[oc++] = arr[i];
    }

    // Print even list
    printf("\nEven Numbers: ");
    for (i = 0; i < ec; i++)
        printf("%d ", even[i]);

    // Print odd list
    printf("\nOdd  Numbers: ");
    for (i = 0; i < oc; i++)
        printf("%d ", odd[i]);

    printf("\n");

    return 0;
}
