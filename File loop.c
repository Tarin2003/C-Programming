#include<stdio.h>
int main()
{   FILE *file;
    char name[50];
    int id,age,batch,i,n;
    float gpa;
    char section[10];

    file = fopen("student.o","a");
    if(file==NULL)
    {
        printf("File does not exist");


    }
    else
    {
        printf("File is opened\n");


    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("enter student Name : ");
       scanf("%s",name);
       printf("enter student ID : ");
       scanf("%d",&id);
       printf("enter student Age : ");
       scanf("%d",&age);
       printf("enter student Batch : ");
       scanf("%d",&batch);
       printf("enter student Section : ");
       scanf("%s",section);

       printf("enter student GPA : ");

       scanf("%f",&gpa);

        fprintf(file,"%s\t\t%d\t%d\t%d\t%s\t%f\n",name,id,age,batch,section,gpa);

    }
    }
    fclose(file);
    return 0;

}
