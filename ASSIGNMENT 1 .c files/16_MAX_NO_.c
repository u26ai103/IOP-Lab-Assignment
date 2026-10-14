#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter values of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("%d is the MAX number", a);
        }
        else{
            printf("%d is the MAX number", c);
        }
    }
    else{
        if(b>c){
            printf("%d is the MAX number", b);
        }
        else{
            printf("%d is the MAX number", c);
        }
    }
}