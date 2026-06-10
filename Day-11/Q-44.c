#include<stdio.h>
int fac(int n);
int main (){
    int m,f;
    printf("enter the number");
    scanf("%d",&m);
    f=fac(m);
    return 0;
}
int fac(int n){
int i,f=1;

    if (n<0){
        printf("factorial not possible");
    }
    for(i=1;i<=n;i++){
        f=f*i;
      
    }
      printf("%d",f);
    return 0;
}

