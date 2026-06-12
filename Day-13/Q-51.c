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
    int min=a[0];
    int max=a[0];
    for(i = 0; i < n; i++){
        if (a[i]<min){
            min=a[i];
        }
        if (a[i]>max){
            max=a[i];
        }
    }
        printf("minimum is: %d",min);
         printf("maximum is: %d",max);
    
    return 0;
}
