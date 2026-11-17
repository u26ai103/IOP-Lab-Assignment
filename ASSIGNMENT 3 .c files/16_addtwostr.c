#include<stdio.h>
int main(){
    int i=0, j=0, n;
    char str1[50], str2[50], str[50];
    printf("Enter str1 : ");
    gets(str1);
    printf("\nEnter str2 : ");
    gets(str2);
    while(str1[i]!='\0'){
        str[j]=str1[i];
        j++;
        i++;

    }
    str[j]=' ';
    j++;
    i=0;
    while(str2[i]!='\0'){
        str[j]=str2[i];
        j++;
        i++;
    }
    str[j]='\0';
    printf("\nThe Final String is : ");
    puts(str);
}