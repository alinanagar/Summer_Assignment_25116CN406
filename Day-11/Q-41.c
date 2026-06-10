#include<stdio.h>
int add(int x,int y);
int main (){
    int a,b,c;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum is %d",c);
    return 0;
}
int add(int x,int y){
    int c;
    c=x+y;
    return c;
}
