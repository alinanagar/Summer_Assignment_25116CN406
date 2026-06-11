#include<stdio.h>
int pal(int n);
int main(){
    int m,p;
    printf("enter the value of m");
    scanf("%d",&m);
    p=pal(m);
    if(p==1){
        printf("pallindrome");
    }
    else{
        printf("not pallindrome");
        return 0;
    }
}
int pal(int n){
    int rev=0,d,temp;
    temp=n;
    while(n>0){
    d=n%10;
    rev=rev*10+d;
    n=n/10;
    }
    if (temp==rev){
        return 1;
    }
    else{
        return 0;
    }
}