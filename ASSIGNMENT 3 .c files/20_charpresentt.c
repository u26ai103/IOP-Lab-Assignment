#include<stdio.h>
#include<string.h>
int main(){
    char str[50], ch;
    int i, flag=0;
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    printf("Enter character to be searched : ");
    scanf(" %c", &ch);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(ch==str[i]){
            printf("%c is at position %d\n", ch, i+1);
            flag=1;
        }
    }
    if(flag==0){
        printf("%c is not present in the string\n", ch);
    }
}