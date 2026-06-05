#include<stdio.h>
int main ()
{
    int n,temp,d,sum=0,f=1,i;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while (n>0){
        f=1;
        d=n%10;
        for (i=1;i<=d;i++){
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
}
    if (sum==temp){
        printf("its a strong number");
    }
    else{
        printf("its not a strong number");
        return 0;
    }
    

}
