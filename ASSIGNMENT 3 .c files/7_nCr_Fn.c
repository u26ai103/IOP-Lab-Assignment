#include<stdio.h>
int nCr(int n, int r);
int fact(int n);
int main(){
    int n, r, NCR;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);
    NCR = nCr(n, r);
    printf("nCr=%d", NCR);
}
int fact(int n){
    int i, N=1;
    for(i=1;i<=n;i++){
        N=N*i;
    }
    return(N);
}
int nCr(int n, int r){
    int nCr;
    nCr=fact(n)/(fact(r)*(fact(n-r)));
    return(nCr);
}