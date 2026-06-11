#include<stdio.h>
int fib(int num);
int main(){
    int m;
    printf("enter the value of m");
    scanf("%d",&m);
    fib(m);
    return 0;
    }
int fib (int num){
    int n1=0,n2=1,n3,i;
    printf("%d%d",n1,n2);
    for (i=3;i<=num;i++){
        n3=n2+n1;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}