#include<stdio.h>
void swap(int x, int y);
int main(){
    int n, x, y;
    printf("enter a number x:");
    scanf("%d", &x);
    printf("enter a number y:");
    scanf("%d", &y);
    swap(x, y);
}
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("X=%d\ny=%d", x, y);
}
