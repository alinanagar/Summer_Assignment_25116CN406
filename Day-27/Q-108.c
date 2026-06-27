#include<stdio.h>
struct student
{
int roll;
char name[20];
float m1,m2,m3,m4,m5,total,per;
char grade;
};
int main()
{
    struct student s;
    
    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter Marks of 5 Subjects:\n");
    scanf("%f%f%f%f%f",&s.m1,&s.m2,&s.m3,&s.m4,&s.m5);

    s.total=s.m1+s.m2+s.m3+s.m4+s.m5;
    s.per=s.total/5;

    if(s.per>=90)
        s.grade='A';
    else if(s.per>=75)
        s.grade='B';
    else if(s.per>=60)
        s.grade='C';
    else if(s.per>=40)
        s.grade='D';
    else
        s.grade='F';

    printf(" Marksheet");
    printf("Roll Number : %d\n",s.roll);
    printf("Name        : %s\n",s.name);
    printf("Total Marks : %.2f\n",s.total);
    printf("Percentage  : %.2f\n",s.per);
    printf("Grade       : %c\n",s.grade);

    return 0;
}