#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int id , age;
    file = fopen("stud.o","w");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name :");
        gets(name);
        printf("ID :");
        scanf("%d",&id);
        printf("Age :");
        scanf("%d",&age);
        fprintf(file,"name : %s , ID : %d, Age : %d\n",name,id,age);
        printf("File is written successfully\n");
    }
            fclose(file);

    getch();
}


