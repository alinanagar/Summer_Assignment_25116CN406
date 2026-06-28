#include<stdio.h>

int main() {
    int choice;
    int seats = 10, book, cancel;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &book);

                if(book <= seats) {
                    seats = seats - book;
                    printf("Ticket Booked Successfully!\n");
                }
                else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &cancel);

                seats = seats + cancel;

                if(seats > 10)
                    seats = 10;

                printf("Ticket Cancelled Successfully!\n");
                break;

            case 3:
                printf("Available Seats = %d\n", seats);
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