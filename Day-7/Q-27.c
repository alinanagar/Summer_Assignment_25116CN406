#include<stdio.h>
int digit(int n);
int main(){
    int num,j;
    printf("enter the number");
    scanf("%d",&num);
    j=digit(num);
    printf("%d",j);
}

    int digit(int n){
        int d,sum=0;
        while(n!=0){
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    return sum;    
    return 0;
    }

