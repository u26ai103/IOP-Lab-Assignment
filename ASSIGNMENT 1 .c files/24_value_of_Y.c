#include <stdio.h>
#include <math.h>
int main(){
    int x, n, a;
    float Y;
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter value of n : ");
    scanf("%d", &n);
    if(n==1){
        Y=x+1;
        printf("Y = %f", Y);
    }
    else if(n==2){
        Y = 1 + (x / n);
        printf("Y = %f", Y);
    }
    else if(n==3){
        Y = 1 + pow(x, n);
        printf("Y = %f", Y);
    }
    else{
        Y=1+(n*x);
        printf("Y = %f", Y);
    }
}