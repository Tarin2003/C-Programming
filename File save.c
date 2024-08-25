#include<stdio.h>
int main()
{   FILE *file;
    char name[50];
    int id,age,batch,i,n;
    float gpa;
    char section[10];

    file = fopen("student.txt","a");
    if(file==NULL)
    {
        printf("File does not exist");


    }
    else
    {
        printf("File is opened\n");
    }



}
