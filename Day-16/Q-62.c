#include<stdio.h>
int main()
{
    int a[10], i, j, n, count, mf=0, element;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>mf)
        {
            mf=count;
            element=a[i];
        }
    }
    printf("Maximum frequency element is %d", element);
    return 0;
}