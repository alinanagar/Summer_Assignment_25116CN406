#include<stdio.h>
int main (){
    int a[100], i, flag=0,n,search,count=0;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be counted");
    scanf("%d", &search);
    for (i=0;i<n;i++){
        if (search==a[i]){
            count=count+1;
        }
    }
    printf("frequency of %d is %d",search,count);
    return 0;
}
