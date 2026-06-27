#include<stdio.h>
struct employee
{
int id;
char name[20];
float basic,hra,da,total;
};

int main()
{
    struct employee e[10];
    int n,i;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d",&e[i].id);

        printf("Enter Employee Name: ");
        scanf("%s",e[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f",&e[i].basic);

        e[i].hra = 0.20 * e[i].basic;
        e[i].da = 0.10 * e[i].basic;
        e[i].total = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\nEmployee Salary Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nEmployee ID: %d",e[i].id);
        printf("\nName: %s",e[i].name);
        printf("\nBasic Salary: %.2f",e[i].basic);
        printf("\nHRA: %.2f",e[i].hra);
        printf("\nDA: %.2f",e[i].da);
        printf("\nTotal Salary: %.2f\n",e[i].total);
    }

    return 0;
}