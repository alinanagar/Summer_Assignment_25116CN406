#include<stdio.h>
int main (){
    int a[10],i,n1,n2,b[10],c[20];
    printf("enter no of elements");
    scanf("%d",&n1);
    printf("enter the elements");
    for (i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter no of elements");
    scanf("%d",&n2);
    printf("enter the elements");
    for (i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    printf("merged array is");
    for(i=0;i<n1+n2;i++){
        printf("%d",c[i]);
    }
    return 0;
}


