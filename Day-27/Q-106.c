#include<stdio.h>
struct employee
{
int id;
char name[20];
float salary;
};
int main()
{
    struct employee e[10];
    int n,i,id,found=0;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d",&e[i].id);

        printf("Enter Name: ");
        scanf("%s",e[i].name);

        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\nEmployee Records:\n");

    for(i=0;i<n;i++)
    {
        printf("\nEmployee ID: %d",e[i].id);
        printf("\nName: %s",e[i].name);
        printf("\nSalary: %.2f\n",e[i].salary);
    }

    printf("\nEnter Employee ID to Search: ");
    scanf("%d",&id);

    for(i=0;i<n;i++)
    {
        if(e[i].id==id)
        {
            printf("\nEmployee Found\n");
            printf("Employee ID: %d\n",e[i].id);
            printf("Name: %s\n",e[i].name);
            printf("Salary: %.2f\n",e[i].salary);
            found=1;
        }
    }

    if(found==0)
    {
        printf("Employee Not Found");
    }

    return 0;
}