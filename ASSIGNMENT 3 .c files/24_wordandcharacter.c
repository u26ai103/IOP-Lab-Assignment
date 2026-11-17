#include<stdio.h>
#include<string.h>
int main(){
    char str[100], ch;
    int i, j=1, k;
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    for(i=0;i<strlen(str);i++){
        switch(str[i]){
            case ' ':
            case '!':
                j++;
                break;
        }
    }
    printf("Total number of words in sentence is : %d", j);
    printf("\nTotal number of characters in sentence is : %d", strlen(str) - 1);
}