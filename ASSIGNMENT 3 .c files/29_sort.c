#include<stdio.h>
#include<string.h>
int main(){
    char str[5][100], n[100];
    int i, j, k;
    printf("Enter a string : \n");
    for(i=0;i<5;i++){
        printf("%d.\t", i+1);
        fgets(str[i], 100, stdin);
        strupr(str[i]);
    }
    printf("\nAFTER SORT -->\n");
    for(i=0;i<5;i++){
        for(j=0;j<5-1;j++){
            if(strcmp(str[j],str[j+1])>0){
                strcpy(n,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],n);
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d.\t", i+1);
        fputs(str[i], stdout);
    }
}