#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d/%d! ", i, i);
        if(i<n){
            printf("+");
        }
    }
}