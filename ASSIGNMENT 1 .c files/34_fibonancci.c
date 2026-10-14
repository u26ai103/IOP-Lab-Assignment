#include<stdio.h>
int main(){
    int i, n, f1,fth, f;
    printf("enter no. of terms in fibonancci series : ");
    scanf("%d", &n);
    f1=1;
    f=0;
    for(i=1;i<=n;i++){
        printf("%d\n", f1);
        fth=f1+f;
        f=f1;
        f1=fth;
    }
}