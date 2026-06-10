#include<stdio.h>
int max(int x,int y, int z);
int main (){
    int a,b,c,maximum;
    printf("enter the values of a , b and c");
    scanf("%d%d%d",&a,&b,&c);
    maximum=max(a,b,c);
    return 0;
}
int max(int x,int y, int z){
    if (x>y && x>z){
        printf("x is maximum");
    }
    else if (y>x && y>z){
        printf("y is maximum");
    }
    else if (z>x && z>y){
        printf("z is maximum");
    }
    else {
        printf("all are equal");
    }
    return 0;
}