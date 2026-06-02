#include<stdio.h>
int main ()
{
    int n,d,p=1;
    printf("enter the number");
    scanf("%d",&n);
    while (n!=0){
        d=n%10;
        p=p*d;
        n=n/10;
    }
    printf("product is %d",p);
    return 0;
}