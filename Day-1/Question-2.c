#include<stdio.h>
int main(){
    int n,m,i=1;
    printf("enter the number");
    scanf("%d", &n);
    while(i<=10){
        m=n*i;
        printf("%d\n", m);
        i++;
        
    }
}