#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i, j, k, n, ca=0, ce=0, ci=0, co=0, cu=0;
    printf("Enter a string : ");
    fgets(str, 50, stdin);
    strlwr(str);
    for(i=0;i<strlen(str);i++){
        switch(str[i]){
            case 'a':
                ca++;
                break;
            case 'e':
                ce++;
                break;
            case 'i':
                ci++;
                break;
            case 'o':
                co++;
                break;
            case 'u':
                cu++;
                break;
        }
    }
    if(ca>0){
        printf("Number of 'a' in sentence is : %d\n", ca);
    }
    if(ce>0){
        printf("Number of 'e' in sentence is : %d\n", ce);
    }
    if(ci>0){
        printf("Number of 'i' in sentence is : %d\n", ci);
    }
    if(co>0){
        printf("Number of 'o' in sentence is : %d\n", co);
    }
    if(cu>0){
        printf("Number of 'u' in sentence is : %d\n", cu);
    }
}