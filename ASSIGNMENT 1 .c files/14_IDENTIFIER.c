#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c", &ch);
    //check character type using ASCII values
    if (ch >= 'A' && ch<= 'Z')
    {
        printf("Thecharacter %c is a CAPITAL LETTER.\n", ch);
    }
    else if(ch>= 'a' && ch<= 'z')
    {
        printf("The character %C is a small case letter.\n", ch);
    }
    else if(ch>= '0' && ch<= '9')
    {
        printf("The character %c is a digit.\n", ch);    
    }
    else
    {
        printf("The character %c is a special character.\n", ch);
    }
    return 0;
}