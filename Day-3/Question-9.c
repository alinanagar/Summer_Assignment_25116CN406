//WAP to check whether a number is prime.
#include<stdio.h>
void main ()
{
    int n,m,i,flag=0;
    printf("enter the number");
    scanf("%d",&n);
    m=n/2;
    for (i=2;i<=m;i++)
    {
        if (n%i==0){
            printf("not a prime no");
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("its a prime number");
    }
}
