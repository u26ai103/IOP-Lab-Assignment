#include<stdio.h>
#include<string.h>
int main(){
    char str[100], c;
    int i, j, k, n;
    printf("Enter someting!!! : ");
    fgets(str, 100, stdin);
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(str)-1;j++){
            if(str[j]>str[j+1]){
                c=str[j];
                str[j]=str[j+1];
                str[j+1]=c;
            }
        }
    }
    fputs(str, stdout);
}