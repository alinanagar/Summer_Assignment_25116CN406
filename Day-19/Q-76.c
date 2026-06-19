#include<stdio.h>
int main(){
    int a[50][50],i,n,j,sum=0;
    printf("enter the n");
    scanf("%d",&n);
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                printf("\nenter a[%d][%d]" ,i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
              if (i==j || i+j==n-1){
                sum+=a[i][j];
              }
        }
    }
     printf("  sum is %d", sum);
        return 0;
}
