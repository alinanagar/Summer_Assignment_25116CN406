#include<stdio.h>
int main (){
    int n,count=0,r;
    printf("enter the number");
    scanf("%d",&n);
    while (n!=0){
        r=n%2;
        if(r==1){
            count++;
        }
        n=n/2;
    }
    printf("%d",count);
    return 0;
    

}