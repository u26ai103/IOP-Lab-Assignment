#include<stdio.h>
struct book{
    char name[20];
    char author[20];
    int price;
}b1;
struct book *ptr;
int main(){
    printf("Enter book details :\n");
    printf("Name : ");
    fgets(b1.name,20,stdin);
    printf("Author : ");
    fgets(b1.author,20,stdin);
    printf("Price : ");
    scanf("%d", &b1.price);

    ptr=&b1;

    printf("Book details -->\n");
    printf("Name : ");
    fputs(ptr->name,stdout);
    printf("Author : ");
    fputs(ptr->author,stdout);
    printf("Price : ");
    printf("%d", ptr->price);

    return 0;
}