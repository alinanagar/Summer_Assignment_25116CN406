#include<stdio.h>
int main (){
    char s[20], temp;
    int i=0,len=0;
    printf("enter the string");
    scanf("%s",s);

    while (s[i]!='\0'){
        len++;
        i++;
    }
    for (i=0; i<len/2; i++){
        temp= s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
    int flag=1;
    for (i=0; i<len/2;i++){
        if (s[i]!= s[len-1-i]){
            flag=0;
            break;
        }
    }    
    if (flag==1){
        printf("pallindrome");
    }
    else{
        printf("not pallindrome");
    }
    return 0;
}
    