#include<stdio.h>
int main (){
    char str[100];
    int i, max=0, len=0;
    printf("enter the string");
    scanf("%[^\n]", str);
    for (i=0; ; i++){
        if (str[i]!=' ' && str[i]!='\0'){
            len++;
        }
        else{
            if (len>max){
                max=len;
            }
            len=0;
            if(str[i]=='\0')
            break;
        
        }
    }
    printf("length of the largest word=%d", max);
    return 0;
}