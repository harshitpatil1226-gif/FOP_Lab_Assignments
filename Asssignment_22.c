#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str1);

    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1.  Length of String\n");
        printf("2.  Reverse String\n");
        printf("3.  Copy String\n");
        printf("4.  Concatenate Strings\n");
        printf("5.  Compare Strings\n");
        printf("6.  Convert to Uppercase\n");
        printf("7.  Convert to Lowercase\n");
        printf("8.  Count Vowels & Consonants\n");
        printf("9.  Check Palindrome\n");
        printf("10. Find Substring\n");
        printf("0.  Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Length = %d\n", strlen(str1));
                break;

            case 2:
                printf("Reversed = %s\n", strrev(str1));
                break;

            case 3:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated = %s\n", str1);
                break;

            case 5:
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are EQUAL\n");
                else
                    printf("Strings are NOT EQUAL\n");
                break;

            case 6:
                for (int i = 0; str1[i]; i++)
                    str1[i] = toupper(str1[i]);
                printf("Uppercase = %s\n", str1);
                break;

            case 7:
                for (int i = 0; str1[i]; i++)
                    str1[i] = tolower(str1[i]);
                printf("Lowercase = %s\n", str1);
                break;

            case 8:
                int v = 0, c = 0;
                for (int i = 0; str1[i]; i++) {
                    char ch = tolower(str1[i]);
                    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                        v++;
                    else if (isalpha(ch))
                        c++;
                }
                printf("Vowels = %d, Consonants = %d\n", v, c);
                break;

            case 9:
                char rev[100];
                strcpy(rev, str1);
                strrev(rev);
                if (strcmp(str1, rev) == 0)
                    printf("%s is a PALINDROME\n", str1);
                else
                    printf("%s is NOT a PALINDROME\n", str1);
                break;

            case 10:
                printf("Enter substring to find: ");
                scanf("%s", str2);
                if (strstr(str1, str2) != NULL)
                    printf("\"%s\" FOUND in \"%s\"\n", str2, str1);
                else
                    printf("\"%s\" NOT FOUND\n", str2);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
