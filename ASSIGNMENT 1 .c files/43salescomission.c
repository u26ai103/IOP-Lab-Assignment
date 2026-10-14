#include<stdio.h>
int main(){
    int i, j, sales, comission, pay;
    printf("Enter Sales");
    scanf("%d", &sales);
    if(sales<=500){
        comission=0.05;
        pay=sales*comission;
    }
    if(sales>500 && sales<=2000){
        comission=0.1;
        pay=(sales-500)*comission+35;
    }
    if(sales>2000 && sales<=5000){
        comission=0.12;
        pay=(sales-2000)*comission+185;
    }
    if(sales>5000){
        comission=0.125;
        pay=(sales-5000)*comission;
    }
    printf("PAY IS %d", pay);
}