#include<stdio.h>
int main(){
    int i=0, j=0, n;
    char str1[50], str2[50];
    printf("Enter str1 : ");
    gets(str1);
    printf("\nString 1 : ");
    puts(str1);
    while(str1[i]!='\0'){
        str2[j]=str1[i];
        i++;
        j++;
    }
    str2[j]='\0';
    printf("\nString 2 : ");
    puts(str2);
}