#include<stdio.h>
int main(){
    int i, j, unit, charge, amount;
    printf("Enter unit");
    scanf("%d", &unit);
    if(unit<=200 && unit>0){
        charge=0.5;
        amount=unit*charge;
    }
    if(unit<=400 && unit>=201){
        charge=0.65;
        amount=(unit-200)*charge+100;
    }
    if(unit<=600 && unit>=401){
        charge=0.05;
        amount=230+(unit-400)*charge;
    }
    if(unit>600){
        charge=1.25;
        amount=(unit-600)*charge+425;
    }
    
    printf("AMOUNT IS %d", amount);
}