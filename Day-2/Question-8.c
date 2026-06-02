#include<stdio.h>
int main ()
{
    int n,d,rev=0,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while (n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if (temp==rev){
        printf("number is pallindrome");
    }
    else {
        printf("number is not pallindrome");
    }
    
    return 0;
}