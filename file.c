#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("tes.o","w");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
    }
            fclose(file);

    getch();
}
