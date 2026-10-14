#include<stdio.h>
int main(){
    int i, max, min, n;
    printf("Enter the number you want to check : ");
    scanf("%d", &n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    max=num[0];
    min=num[0];
    for(i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<min){
            min=num[i];
        }
    }
    printf("MAX NO. = %d\nMIN NO. = %d", max, min);
}