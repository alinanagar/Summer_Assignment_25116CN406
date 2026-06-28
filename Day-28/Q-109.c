#include<stdio.h>
int main() {
    int choice, id, search, i, n = 0;
    char title[20][50], author[20][50];
    int bookid[20];

    do {
        printf("\nLIBRARY MANAGEMENT SYSTEM\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookid[n]);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", title[n]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[n]);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n==0) {
                    printf("No books available.\n");
                }
                else {
                    printf("\nBook List:\n");
                    for(i=0;i<n;i++) {
                        printf("\nBook %d\n", i+1);
                        printf("ID: %d\n", bookid[i]);
                        printf("Title: %s\n", title[i]);
                        printf("Author: %s\n", author[i]);
                    }
                }
                break;

            case 3:
                if(n==0) {
                    printf("No books available.\n");
                }
                else {
                    printf("Enter Book ID to Search: ");
                    scanf("%d", &search);

                    for(i=0;i<n;i++) {
                        if(bookid[i]==search) {
                            printf("\nBook Found!\n");
                            printf("ID: %d\n", bookid[i]);
                            printf("Title: %s\n", title[i]);
                            printf("Author: %s\n", author[i]);
                            break;
                        }
                    }

                    if(i==n)
                        printf("Book Not Found.\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice!=4);

    return 0;
}