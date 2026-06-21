#include<stdio.h>
int main(){
    int a[50][50],i,r1,c1,j,flag=1,sum;
    printf("enter the r1 and c1");
    scanf("%d %d",&r1,&c1);
        for (i=0;i<r1;i++){
            for (j=0;j<c1;j++){
                printf("enter a[%d][%d]" ,i,j);
                scanf("%d",&a[i][j]);
            }
        }
    for (i=0;i<r1;i++){
        sum=0;
        for (j=0;j<c1;j++){
            sum+=a[i][j];
        }
        printf("sum of row %d = %d\n", i+1, sum);
    }
    return 0;
}