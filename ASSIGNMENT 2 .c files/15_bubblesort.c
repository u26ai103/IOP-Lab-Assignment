#include<stdio.h>
int main(){
    int i, n, j, k, min, temp;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array->\n");
    for(i=0;i<n;i++){
        printf("%d.\t", i+1);
        scanf("%d", &a[i]);
    }
    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("sorted array is -->\n");
    for(i=0;i<n;i++){
        printf("%d.\t", i+1);
        printf("%d\n", a[i]);
    }
    return 0;
}