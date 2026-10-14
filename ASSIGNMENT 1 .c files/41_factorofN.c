#include<stdio.h>
int main(){
    int i, j, k, num;
    char ch;
    do{
        printf("Enter a Numbr : ");
        scanf("%d", &num);
        printf("Factors of %d are : ", num);
        for(i=1; i<=num; i++){
            if(num%i==0){
                printf("%d\t", i);
            }

        }
        printf("\n");
        printf("Do you want to continue : ");
        scanf(" %c", &ch);
    }while(ch=='y');
}