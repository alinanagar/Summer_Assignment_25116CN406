#include<stdio.h>
int main (){
    int a[10],i,n,j,sum;
    for (i=0;i<=n;i++){
        printf("%d",i);
    }
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the required sum");
    scanf("%d",&sum);
    printf("the pair are");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("%d%d",a[i],a[j]);
            }
        }
    }
    return 0;
}