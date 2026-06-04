//WAP to print armstrong number in a range.
#include<stdio.h>
int main ()
{
    int n,d,sum,num,temp,start,end;
    printf("enter the start and end point");
    scanf("%d%d",&start,&end);
    for (num=start;num<=end;num++){
        n=num;
        temp=num;
        sum=0;
        while (n!=0){
             d=n%10;
             sum=sum+(d*d*d);
             n=n/10;
            }
            if (sum==temp){
                printf("%d\t",temp);
            }
        }
    


return 0;
}