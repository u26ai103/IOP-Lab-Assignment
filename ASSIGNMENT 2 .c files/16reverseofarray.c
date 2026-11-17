#include<stdio.h>
int main(){
    int n=3, a[n], i, temp;
    printf("Enter a array -->\n");
    for(i=0;i<n;i++){
        printf("%d.\t", i+1);
        scanf("%d", &a[i]);
    }
    printf("The reversed array is -->\n");
    for(i=0;i<=n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d.\t", i+1);
        printf("%d\n", a[i]);
    }
}