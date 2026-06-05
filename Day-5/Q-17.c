#include<stdio.h>
int main ()
{
    int n,i,sum=0,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++){
        if (n%i==0){
            printf("%d",i);
            sum=sum+i;
        }

    }
    if (sum==temp){
        printf("its a perfect number");
    }
    else {
        printf("its not a perfect number");
        return 0;
    }
}