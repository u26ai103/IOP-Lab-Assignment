#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i, j, k;
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    for(i=0; i<strlen(str);i++){
        if(str[i]>=97){
            str[i]=str[i]-32;
        }
    }
    fputs(str, stdout);
}