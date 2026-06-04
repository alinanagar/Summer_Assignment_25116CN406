//WAP to find nth fibonacci term.
#include<stdio.h>
int main ()
{
    int n1=0,n2=1,n3, num,i;
    printf("enter the number");
    scanf("%d",&num);
    if (num==1){
        printf("nth term is %d",n1);

    }
    else if (num==2){
        printf("nth term is %d",n2);
    }
    else{
        for (i=3;i<=num;i++){
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
         printf("nth term is %d",n3);
    
    }
   
    
    return 0;
}