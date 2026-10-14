#include<stdio.h>
int main(){
    int i, j, k, num, flag=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i=2;i<=num/2 && flag==0;i++){
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==0){
        printf("Prime Number");
    }
    else{
        printf("Composite Number");
    }
}