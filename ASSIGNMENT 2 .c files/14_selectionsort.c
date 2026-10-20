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
        for(i=j;i<n;i++){
            if(a[i]<a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("THE ASSORTED ARRAY IS -->\n");
    for(i=0;i<n;i++){
        printf("%d.\t", i+1);
        printf("%d\n", a[i]);
    }
}