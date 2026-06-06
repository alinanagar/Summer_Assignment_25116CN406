#include<stdio.h>
int main(){
    int n,p,i,result=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        result=result*n;
    }
    printf("%d",result);
    return 0;
    
}