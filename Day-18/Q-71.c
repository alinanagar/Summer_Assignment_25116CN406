#include<stdio.h>
int main (){
    int a[100], search,first,last,middle,n,i;
    printf("enter the elements");
    scanf("%d",&n);
    printf("the elements are");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while (first<=last){
        if (a[middle]<search){
            first=middle+1;
            middle=(first+last)/2;
        }
        else if(a[middle]==search){
            printf("the no %d is found at position %d", search, middle+1);
            break;
        }
        else{
            last=middle-1;
            middle=(first+last)/2;
        }
    }
    if (first>last){
        printf("the no %d is not found",search);
    }
    return 0;

}