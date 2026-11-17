#include<stdio.h>
int main(){
    int i, j, k, n, a[n], flag=0, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("%d.\t", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the elment you want to search from the arrays: ");
    scanf("%d", &key);
    for(i=0;i<n && flag==0;i++){
        if(a[i]==key){
            flag=1;
            j=i+1;
        }
    }
    if(flag==1){
        printf("The number %d is present in the array at %d position", key, j);
    }
    else{
        printf("The number is NOT in array");
    }
}