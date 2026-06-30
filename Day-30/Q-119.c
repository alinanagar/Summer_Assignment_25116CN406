#include <stdio.h>
int main() {
    int id[100], salary[100], n, i;
    char name[100][50], department[100][50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Department: ");
        scanf(" %[^\n]", department[i]);

        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\nEMPLOYEE RECORD\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", id[i]);
        printf("Name        : %s\n", name[i]);
        printf("Department  : %s\n", department[i]);
        printf("Salary      : %d\n", salary[i]);
    }

    return 0;
}