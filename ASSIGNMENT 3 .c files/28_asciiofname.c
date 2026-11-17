#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, j, k, n;
    printf("Enter a name : ");
    fgets(str, 100, stdin);
    printf("ASCII CODES -->\n");
    for(i=0;i<strlen(str)-1;i++){
        printf("%d.\t%c --> %d\n", i+1, str[i], str[i]);
    }
}