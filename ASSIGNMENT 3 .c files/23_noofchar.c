#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i, j, k, cA=0, ca=0, c1=0, cN=0;
    printf("Enter the string : ");
    fgets(str, 50, stdin);
    for(i=0; i<strlen(str);i++){
        if(str[i]>=97 && str[i]<=122){
            ca++;
        }
        else if(str[i]>=65 && str[i]<=90){
            cA++;
        }
        else if(str[i]>=48 && str[i]<=57){
            c1++;
        }
        else{
            cN++;
        }
    }
    printf("\nThe number of Upper case character : %d", cA);
    printf("\nThe number of lower case character : %d", ca);
    printf("\nThe number of digits : %d", c1);
    printf("\nThe number of special symbols including space : %d", cN);
}