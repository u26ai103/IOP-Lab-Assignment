#include<stdio.h>
int main(){
    int arr[10], i, j, pos=0, neg=0, zero=0;
    printf("Enter 10 integer\n");
    for(i=0;i<10;i++){
        printf("%d.", i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]>0){
            pos+=1;
        }
        if(arr[i]<0){
            neg+=1;
        }
        if(arr[i]==0){
            zero+=1;
        }
    }
    printf("The number of positive integers is %d\n", pos);
    printf("The number of negative integers is %d\n", neg);
    printf("The number of zero integers is %d\n", zero);
}