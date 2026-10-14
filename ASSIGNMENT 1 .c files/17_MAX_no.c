#include <stdio.h>
int main(){
   int a, b, c;
   printf("ENter value of a, b and c\n");
   scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is the MAX number", a);
    }
    else if(b>c && b>a){
        printf("%d is the MAX number", b);
    }
    else{
        printf("%d is the MAX number", c);
    }
}