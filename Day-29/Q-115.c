#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, len = 0, choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str1);

    printf("\n===== STRING MENU =====\n");
    printf("1. Find Length\n");
    printf("2. Copy String\n");
    printf("3. Reverse String\n");
    printf("4. Display String\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            while(str1[len] != '\0')
                len++;
            printf("Length = %d", len);
            break;

        case 2:
            for(i = 0; str1[i] != '\0'; i++)
                str2[i] = str1[i];
            str2[i] = '\0';
            printf("Copied String = %s", str2);
            break;

        case 3:
            while(str1[len] != '\0')
                len++;

            printf("Reversed String = ");
            for(i = len - 1; i >= 0; i--)
                printf("%c", str1[i]);
            break;

        case 4:
            printf("String = %s", str1);
            break;

        case 5:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}