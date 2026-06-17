#include<stdio.h>
int main (){
    int a[10],i,n,actual=0,expected=0,missing=0;
    for (i=0;i<=n;i++){
        printf("%d",i);
    }
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        actual+=a[i];
    }
    for (i=0;i<=n+1;i++){
        expected+=i;
    }
    missing=expected-actual;
    printf("missing number is %d",missing);
    return 0;
}


