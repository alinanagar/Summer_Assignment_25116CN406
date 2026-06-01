#include<stdio.h>
int main(){
    int n,f=1,i=1;
    printf("enter the number");
    scanf("%d", &n);
    if (n<0){
        printf("factorial not possible");
    }
    else {
        while(i<=n){
            f=f*i;
            i++;
        }
        printf("%d",f);
        
    }
 return 0;
        
    
}