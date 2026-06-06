#include<stdio.h>
int fact(int n);
void main(){
    int num,j;
    printf("enter the number");
    scanf("%d",&num);
    j=fact(num);
    printf("%d",j);
}
int fact (int n){
    if (n==0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
   
