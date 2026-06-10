#include<stdio.h>
int prime(int n);
int main (){
    int m,p;
    printf("enter the number");
    scanf("%d",&m);
    p=prime(m);
    return 0;
}
int prime(int n){
    int i,flag=0;
    for (i=2;i<=n/2;i++){
        if (n%i==0){
            printf("not prime");
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("prime");
    }
    return 0;
    
}