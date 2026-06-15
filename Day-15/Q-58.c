#include<stdio.h>
int main (){
    int a[20],i,n;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
int temp=a[0];
for(i=0;i<n-1;i++){
    a[i]=a[i+1];
}
a[n-1]=temp;
printf("rotated array to left is");
for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}