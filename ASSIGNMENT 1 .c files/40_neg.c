#include<stdio.h>
int main(){
    int i, n, j, k, sum;
    printf("Enter N : ");
    sum=0;
    do{
        scanf("%d", &n);
        if(n>0){
            sum=sum+n;
        }
    }
    while(n>0);
    printf("SUM OF NUMBERS READ IS : %d", sum);
}