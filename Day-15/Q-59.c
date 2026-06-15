#include<stdio.h>
int main (){
    int a[20],i,n;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
int temp=a[n-1];
for(i=n-1;i>0;i--){
    a[i]=a[i-1];
}
a[0]=temp;
printf("rotated array to right is");
for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}