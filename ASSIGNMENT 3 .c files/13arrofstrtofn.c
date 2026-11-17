#include<stdio.h>
struct student{
    char name[20];
    int marks;
}data[10];
int main(){
    int i;
    printf("Enter details -->\n");
    for(i=0;i<10;i++){
        printf("%d.\n", i+1);
        printf("Name : ");
        fgets(data[i].name, 20, stdin);
        printf("Marks : ");
        scanf("%d", &data[i].marks);
        getchar();
    }
    for(i=0;i<10;i++){
        if(data[i].marks>500){
            printf("%d.\n", i+1);
            printf("Name : ");
            fputs(data[i].name,stdout);
            printf("Marks : %d\n", data[i].marks);
        }
    }
    return 0;
}