#include<stdio.h>
int main(){
    int a[50][50],b[50][50],c[50][50],i,r1,r2,c1,c2,j,k;
    printf("enter the r1 and c1");
    scanf("%d %d",&r1,&c1);
    printf("enter the value of r2 and c2");
    scanf("%d %d", &r2, &c2);
    if (c1!=r2){
        printf("multiplication not possible");
    }
    else{
        for (i=0;i<r1;i++){
            for (j=0;j<c1;j++){
                printf("enter a[%d][%d]" ,i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<r2;i++){
            for (j=0;j<c2;j++){
                printf("enter b[%d][%d]",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for (i=0;i<r1;i++){
            for (j=0;j<c2;j++){
               c[i][j]=0;
               for (k=0;k<c1;k++){
                c[i][j]=c[i][j]+ a[i][k]*b[k][j];
               }

               }
            }
            printf("multiplication is");
            for (i=0;i<r1;i++){
                for (j=0;j<c2;j++){
                    printf("%d\t", c[i][j]);
                }

            printf("\n");
        }
    }
        return 0;
    
}