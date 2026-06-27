#include<stdio.h>
struct student{
int roll;
char name[20];
float marks;
};

int main()
{
    struct student s[10];
    int n,i,roll,found=0;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll Number: ");
        scanf("%d",&s[i].roll);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }

    printf("\nStudent Records:\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll Number: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nMarks: %.2f\n",s[i].marks);
    }

    printf("\nEnter Roll Number to Search: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nStudent Found\n");
            printf("Roll Number: %d\n",s[i].roll);
            printf("Name: %s\n",s[i].name);
            printf("Marks: %.2f\n",s[i].marks);
            found=1;
        }
    }

    if(found==0)
    {
        printf("Student Not Found");
    }

    return 0;
}