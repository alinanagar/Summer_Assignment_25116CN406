#include<stdio.h>
int main (){
    int a[100], i, flag=0,n,search;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched");
    scanf("%d", &search);
    for (i=0;i<n;i++){
        if (search==a[i]){
            flag=1;
            break;
        }
    }
    if (flag=1){
        printf("item is found at %d",i+1);
    }
    else{
        printf("search not successful");
    }
    return 0;
}