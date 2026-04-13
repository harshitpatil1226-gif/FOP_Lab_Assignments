#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], sub[100];
    int i, len, choice;

    printf("Enter a string: ");
    scanf("%s", str1);
    len = strlen(str1);

    printf("\n--- Menu ---\n");
    printf("1. Length of String\n");
    printf("2. Reverse String\n");
    printf("3. Equality Check\n");
    printf("4. Palindrome Check\n");
    printf("5. Substring Check\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Length = %d\n", len);
            break;

        case 2:
            printf("Reversed = ");
            for (i = len - 1; i >= 0; i--)
                printf("%c", str1[i]);
            printf("\n");
            break;

        case 3:
            printf("Enter second string: ");
            scanf("%s", str2);
            if (strcmp(str1, str2) == 0)
                printf("Strings are EQUAL\n");
            else
                printf("Strings are NOT EQUAL\n");
            break;

        case 4:
            char rev[100];
            for (i = 0; i < len; i++)
                rev[i] = str1[len - 1 - i];
            rev[len] = '\0';
            if (strcmp(str1, rev) == 0)
                printf("%s is a PALINDROME\n", str1);
            else
                printf("%s is NOT a PALINDROME\n", str1);
            break;

        case 5:
            printf("Enter substring to search: ");
            scanf("%s", sub);
            if (strstr(str1, sub) != NULL)
                printf("\"%s\" FOUND in \"%s\"\n", sub, str1);
            else
                printf("\"%s\" NOT FOUND in \"%s\"\n", sub, str1);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
