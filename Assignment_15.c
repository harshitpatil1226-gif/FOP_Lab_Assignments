#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    printf("How many random numbers do you want? ");
    scanf("%d", &n);

    srand(time(0));  // seed using current time

    printf("\nRandom Numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", rand());
    }

    return 0;
}
