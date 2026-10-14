#include<stdio.h>
int main(){
    int i, num, sum, sum1, j, original_num, remainder;
    printf("Enter a number : ");
    scanf("%d", &num);
    original_num=num;
    while(num/10!=0){
        sum=0;
        while(num!=0){
            remainder=num%10;
            sum=sum+remainder;
            num=num/10;
        }
        num=sum;
        printf("THE SUM OF INDIVIDUAL DIGITS OF IS : %d\n", sum);
        
    }
    printf("THE SINGLE DIGIIT SUM OF %d IS %d", original_num, num);
    return 0;
}