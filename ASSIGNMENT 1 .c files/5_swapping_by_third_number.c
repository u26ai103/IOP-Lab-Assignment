#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Enter two numbers : ");
    scanf("%d %d", &first, &second);
    //now swap two numbers by third//
    third = first;
    first=second;
    second=third;
    printf("After swappping the numbers we get : %d %d", first, second);
}