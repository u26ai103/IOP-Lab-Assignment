#include<stdio.h>
void palindrome(int n);
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d", &n);
    palindrome(n);
}
void palindrome(int n){
    int original=n, reversed=0, remainder;
    while(n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }
    if(original==reversed)
        printf("Number %d is PALINDROME", original);
    else
        printf("Number %d is NOT PALINDROME", original);
}