#include<stdio.h>
#include<string.h>
int main(){
    char string[100], length;
    int i=0, count=0;
    printf("Enter a string : ");
    gets(string);
    length=strlen(string);
    printf("\n");
    puts(string);
    printf("The length of string by strlen is : %d", length);
    while(string[i]!='\0'){
        count++;
        i++;
    }
    printf("\nThe length of string by loop is : %d", count);

}