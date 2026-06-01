#include<stdio.h>
int main ()
{
int n,i=1,sum=0;
printf("enter the natural numbers");
scanf("%d", &n);
while (i<=n){
    sum=sum+i;
    i++;
}
printf("sum is %d", sum);
return 0;
}