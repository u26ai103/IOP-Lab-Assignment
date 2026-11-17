#include<stdio.h>
#include<string.h>
int main(){
    char str[50], c1, c2, temp;
    int i, j, k1, k2;
    printf("Enter a string : ");
    fgets(str, 50, stdin);
    printf("Enter the character you want to replace : ");
    scanf("%c", &c1);
    printf("with : ");
    scanf(" %c", &c2);
    for(i=0;i<strlen(str);i++){
        if(str[i]==c1){
            k1=i;
        }
    }
    printf("After replacing --> ");
    temp=str[k1];
    str[k1]=c2;
    c2=temp;
    fputs(str, stdout);
}