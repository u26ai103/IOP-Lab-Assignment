#include<stdio.h>
#include<string.h>
int main(){
    char str[30], temp, ogstr[30];
    int i, j=0, k;
    printf("Enter a string : ");
    fgets(str, 30, stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(ogstr,str);
    k=strlen(str);
    for(i=0;i<k/2;i++){
        temp=str[i];
        str[i]=str[k-1-i];
        str[k-i-1]=temp;
    }
    if(strcmp(ogstr,str)==0){
        printf("The entered string is a palindrome");
    }
    else{
        printf("NOT A PALINDROME");
    }
}