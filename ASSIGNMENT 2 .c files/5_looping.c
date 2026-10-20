#include<stdio.h>
int main(){
    int i, j, n;

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i!=j){
                printf("0");
                }
            if(i==j){
                printf("1");
                }
            }
        printf("\n");
        }
    return 0;
}