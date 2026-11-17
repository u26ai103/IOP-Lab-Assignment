#include<stdio.h>
int prime_check(int n);
int main(){
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    printf("%d", prime_check(n));
}
int prime_check(int n){
    int i;
    for(i=2;i*i<n;i++){
        if(n%i==0){
            return(0);
        }
    }
    return(1);
}