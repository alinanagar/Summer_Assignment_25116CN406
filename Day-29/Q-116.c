#include <stdio.h>
int main() {
    int id, quantity, choice;
    char name[50];

    printf("===== INVENTORY MANAGEMENT SYSTEM =====\n");
    printf("1. Add Product\n");
    printf("2. View Product\n");
    printf("3. Update Quantity\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter Product ID: ");
            scanf("%d", &id);

            printf("Enter Product Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Quantity: ");
            scanf("%d", &quantity);

            printf("\nProduct Added Successfully!");
            break;

        case 2:
            printf("\nProduct Details\n");
            printf("Product ID : %d\n", id);
            printf("Product Name : %s\n", name);
            printf("Quantity : %d\n", quantity);
            break;

        case 3:
            printf("Enter New Quantity: ");
            scanf("%d", &quantity);

            printf("Quantity Updated Successfully!");
            printf("\nNew Quantity = %d", quantity);
            break;

        case 4:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}