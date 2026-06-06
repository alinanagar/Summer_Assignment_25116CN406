#include<stdio.h>
int reverse(int n);
int main(){
    int num,j;
    printf("enter the number");
    scanf("%d",&num);
    j=reverse(num);
    printf("%d",j);
}
int reverse(int n){
    int i,d,rev;
    while (n>0){
        while (n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
    }
}
