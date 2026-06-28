#include<stdio.h>
int main() {
    int choice, n = 0, i, search;
    char name[20][50];
    long long phone[20];

    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Phone Number: ");
                scanf("%lld", &phone[n]);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No contacts found.\n");
                }
                else {
                    printf("\nContact List:\n");
                    for(i = 0; i < n; i++) {
                        printf("\nContact %d\n", i + 1);
                        printf("Name : %s\n", name[i]);
                        printf("Phone: %lld\n", phone[i]);
                    }
                }
                break;

            case 3:
                if(n == 0) {
                    printf("No contacts found.\n");
                }
                else {
                    printf("Enter Phone Number to Search: ");
                    scanf("%lld", &search);

                    for(i = 0; i < n; i++) {
                        if(phone[i] == search) {
                            printf("\nContact Found!\n");
                            printf("Name : %s\n", name[i]);
                            printf("Phone: %lld\n", phone[i]);
                            break;
                        }
                    }

                    if(i == n)
                        printf("Contact Not Found.\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}