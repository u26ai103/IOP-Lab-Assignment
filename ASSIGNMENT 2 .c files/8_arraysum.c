#include<stdio.h>
int main(){
    int size, n, i, sum=0;
    printf("Enter size of array");
    scanf("%d", &size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("Sum of array is %d", sum);

}