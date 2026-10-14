#include<stdio.h>
int main(){
    char sign;
    float n1, n2;
    printf("Enter n1 : ");
    scanf("%f", &n1);
    printf("Enter a operator (+, -, *, /) : ");
    scanf(" %c", &sign);    
    printf("Enter n2 : ");
    scanf("%f", &n2);
    switch(sign){
        case '+':
            printf("sum is : %.2f", n1+n2);
            break;
            case '-':
            printf("difference is : %.2f", n1-n2);
            break;
            case '*':
            printf("multiplication is : %.2f", n1*n2);
            break;
            case '/':
            printf("division is : %.2f", n1/n2);
            break;
    }
}