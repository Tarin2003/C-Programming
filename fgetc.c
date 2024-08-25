
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    FILE *file;

    char c;

    file = fopen("student.o","r");
    if(file==NULL)
    {
        printf("File does not exist");


    }
    else
    {
        printf("File is opened\n");
      while(!feof(file))
      {


          c = fgetc(file);
       printf("%c",c);


      }
    }


    fclose(file);
    return 0;

}
