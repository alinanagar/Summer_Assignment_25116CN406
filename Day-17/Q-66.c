#include<stdio.h>
int main (){
    int a[10],i,n1,n2,b[10],flag=0,j;
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
    printf("Union of array is");
    for(i=0;i<n1;i++){
        printf("%d",a[i]);
    }

    for(i=0;i<n2;i++){
        flag=0;
        for(j=0;j<n1;j++){
            if(b[i]==a[j]){
                flag=1;
                break;
            }
        }
            if (flag==0){
                printf("%d",b[i]);
            }
        }
        return 0;
    }
