#include<stdio.h>
int main(){
    int n, secret=20;
    printf("enter the number between 1 to 40");
    while(1){
        scanf("%d", &n);
        if (n==secret){
            printf("congratulations! number guessed correctly");
            break;
        }
        else if (n<secret){
        printf("Too low! try again");
        }
        else{
            printf("Too high! try again");
        }

    }
    return 0;
}