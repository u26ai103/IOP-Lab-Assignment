#include<stdio.h>

int main(){
    int i=0, j=0, n, comp;
    char str1[50], str2[50];
    printf("Enter the string 1 : ");
    fgets(str1, 50, stdin);
    printf("Enter the string 2 : ");
    fgets(str2, 50, stdin);
    printf("difference : ");
    while(str1[i]!='\0'){
        comp=str1[i]-str2[j];
        i++;
        j++;
        printf("%d", comp);
    }
}