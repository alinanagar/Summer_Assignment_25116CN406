#include<stdio.h>
int main()
{
    int n, i, a[20],sum=0,avg=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("sum of the array is %d", sum);
     printf("avg of the array is %d", avg);
    return 0;
}