#include<stdio.h>
int main(){
    int i=0, j, count=0, n;
    char str[50];
    printf("Enter str : ");
    fgets(str, 50, stdin);
    while(str[i]!='\0'){
        count++;
        i++;
    }
    for(j=0;j<=count/2;j++){
        n=str[j];
        str[j]=str[count-j-1];
        str[count-j-1]=n;
    }
    str[count]='\0';
    fputs(str, stdout);
}