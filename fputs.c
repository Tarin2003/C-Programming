#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    char university[20];
    file = fopen("str.o","a");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name :");
        gets(name);
        printf("University name :");
        gets(university);
        fputs(name,file);
        fputs("\n",file);
        fputs(university,file);
        fputs("\n",file);
        printf("File is written successfully\n");
    }
            fclose(file);

    getch();
}

