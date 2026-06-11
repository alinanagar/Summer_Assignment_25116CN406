#include<stdio.h>
int pn (int n);
int main(){
    int m,p;
    printf("enter the value of m");
    scanf("%d",&m);
    p=pn (m);
    if(p==1){
        printf("perfect number");
        return 1;
    }
    else{
        printf("not perfect number");
    return 0;
    }
}
int pn (int n)
{
    int i,sum=0,temp;
    temp=n;
    for(i=1;i<n;i++){
        if (n%i==0){
            sum=sum+i;
        }

    }
    if (sum==temp){
        return 1;
    }
    else {
        return 0;
    }
}