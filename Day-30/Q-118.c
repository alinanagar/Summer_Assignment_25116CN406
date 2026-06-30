#include<stdio.h>
int main(){
    int id[100], i, n;
    char title[100][50], author[100][50];

    printf("enter the no of books");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("\n books\n", i+1);

        printf("enter book id");
        scanf("%d", &id[i]);
          printf("Enter Book Title: ");
        scanf(" %[^\n]", title[i]);
        printf("Enter Author Name: ");
        scanf(" %[^\n]", author[i]);
        printf("\n LIBRARY RECORD \n");

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID    : %d\n", id[i]);
        printf("Title      : %s\n", title[i]);
        printf("Author     : %s\n", author[i]);
    }

    return 0;
    }
}