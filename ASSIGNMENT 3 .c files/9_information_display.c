#include<stdio.h>
void book(int n);
int main(){
    int n;
    char ch;
    printf("1--> Book 1\n2--> Book 2\n3--> Book 3\n4--> Book 4\n5--> Book 5\n");
    do{
        printf("Enter the book number --> ");
        scanf("%d", &n);
        book(n);
        printf("Do you want to continue? (y/n) --> ");
        scanf(" %c", &ch);
    }while(ch=='y');
}
void book(int n){
    switch(n){
        case 1: printf("Book 1 --> The Alchemist\nAuthor --> Paulo Coelho\nPublisher --> HarperOne\n");
                break;
        case 2: printf("Book 2 --> To Kill a Mockingbird\nAuthor --> Harper Lee\nPublisher --> J.B. Lippincott & Co.\n");
                break;
        case 3: printf("Book 3 --> 1984\nAuthor --> George Orwell\nPublisher --> Secker & Warburg\n");
                break;
        case 4: printf("Book 4 --> Pride and Prejudice\nAuthor --> Jane Austen\nPublisher --> T. Egerton, Whitehall\n");
                break;
        case 5: printf("Book 5 --> The Great Gatsby\nAuthor --> F. Scott Fitzgerald\nPublisher --> Charles Scribner's Sons\n");
                break;
    }
}