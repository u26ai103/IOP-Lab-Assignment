#include<stdio.h>
#include<string.h>
int main(){
    char a[50], b[50], la, lb;
    printf("Enter a string a : ");
    gets(a);
    printf("Enter a string b : ");
    gets(b);
    la=strlen(a);
    printf("\nlength a : %d \n", la);
    lb=strlen(b);
    printf("length b : %d \n", lb);
    int c=strcmp(a, b);
    printf("\n comparison of a and b : %d", c);
    char cpa[50];
    strcpy(cpa, a);
    printf("\ncpa : ");
    puts(cpa);
    char cpb[50];
    strcpy(cpb, b);
    printf("\ncpb : ");
    puts(cpb);
    strcat(a, " ");
    strcat(a,b);
    printf("\nCncating b into a : %s ", a);

    printf("\nReverse of string a+b is : %s", strrev(a));
}