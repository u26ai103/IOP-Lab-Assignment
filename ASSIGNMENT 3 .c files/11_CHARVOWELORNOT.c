#include<stdio.h>
void vowel_checker(char ch);
int main(){
    int ch;
    printf("Enter a character --> ");
    scanf("%c", &ch);
    vowel_checker(ch);
}
void vowel_checker(char ch){
    if(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("The Entered character %c is a vowel", ch);
    else
        printf("The entered character is not a vowel");
}