#include<stdio.h>
int main()
{
    int n, i, a[20];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ce=0;
    int co=0;
    for (i=0;i<n;i++){
        if (a[i]%2==0){
            ce=ce+1;
        }
        else{
            co=co+1;
        }
    }
        printf("number of evens are:%d",ce);
        printf("number of odds are:%d",co);
    
    return 0;
}