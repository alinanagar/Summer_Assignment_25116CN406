#include<stdio.h>
int arm(int n);
int main(){
    int m,p;
    printf("enter the value of m");
    scanf("%d",&m);
    p=arm(m);
    if(p==1){
        printf("armstrong");
        return 1;
    }
    else{
        printf("not armstrong");
    return 0;
    }
}
int arm (int n){
    int sum=0,d,temp;
    temp=n;
    while (n>0){
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(sum==temp){
        return 1;
    }
    else{
        return 0;
    }
   
}