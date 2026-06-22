#include<stdio.h>
int main (){
    char s[20], temp;
    int i=0,len=0,freq=0,j=0;
    printf("enter the string");
    scanf("%s",s);

    while (s[i]!='\0'){
        len++;
        i++;
    }
    for (i=0; i<len; i++){
        freq=0;
        for (j=0; j<len;j++){
            if (s[i]==s[j]){
                freq++;
            }
        }
        if (freq==1){
         printf("first non repeating character is %c"), s[i];
         break;
    }
}

    return 0;
}
