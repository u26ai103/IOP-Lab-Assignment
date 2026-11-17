#include<stdio.h>
void even_odd(int n);
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d", &n);
    even_odd(n);
}
void even_odd(int n){
    if(n%2==0)
        printf("Number %d is EVEN", n);
    else
        printf("Number %d is ODD", n);
}