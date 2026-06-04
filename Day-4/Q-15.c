//WAP to check armstrong number.
#include<stdio.h>
int main ()
{
    int n,d,sum=0,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
while (n!=0){
    d=n%10;
    sum=sum+(d*d*d);
    n=n/10;
}
if (temp==sum){
    printf("Armstrong");
}
else {
    printf("Not Armstrong");
}
return 0;
}