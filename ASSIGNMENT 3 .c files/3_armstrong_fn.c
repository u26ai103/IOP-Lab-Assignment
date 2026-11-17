#include<stdio.h>
#include<math.h>
void armstrong(int n);
int main(){
    int n;
    printf("Enter a number n :");
    scanf("%d", &n);
    armstrong(n);
}
void armstrong(int num){
    int originalNum, remainder, n=0;
    double result = 0.0;
    originalNum = num;

    int temp=num;
    while (temp != 0){
        temp /= 10;
        ++n;
    }
    temp = num;

    while (temp != 0){
        remainder = temp%10;
        result += round(pow(remainder, n));
        temp /= 10;
    }
    if ((int)result == originalNum)
        printf("%d is an armstrong number\n", originalNum);
    else{
        printf("%d is not a armstrong number\n", originalNum);

    }
}
