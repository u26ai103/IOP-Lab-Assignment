#include<stdio.h>
int main(){
    int n, i, j, count, k, counted, key;
    printf("Enter the size of array -->");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("%d.", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        counted=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                counted=1;
            }
        }
        if(!counted){
            count=0;
            for(j=0;j<n;j++){
                if(a[i]==a[j]){
                    count+=1;
                }
            }
            printf("The Number %d repeats %d Times\n", a[i], count);
        }
    }
}