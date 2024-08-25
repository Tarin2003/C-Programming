#include<stdio.h>
int main()
{

    int mark;
    char gpa[10];

    FILE *file;
    file = fopen("stu.o","a");
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");

    printf("Enter Marks : ");
    scanf("%d",&mark);

    if(mark>100 || mark<0)
        printf("Invalid Mark");
        if(mark>=80 && mark<=100){
        printf("Enter GPA : ");
        scanf("%s",gpa);
     }
	 if(mark>=75 && mark<=79){
       printf("Enter GPA : ");
        scanf("%s",gpa);
	 }
      if(mark>=70 && mark<=74){
        printf("Enter GPA : ");
        scanf("%s",gpa);
      }
     if(mark>=65 && mark<=69){
        printf("Enter GPA : ");
        scanf("%s",gpa);
     }
      if(mark>=60 && mark<=64){
        printf("Enter GPA : ");
        scanf("%s",gpa);
      }
     if(mark>=55 && mark<=59){
        printf("Enter GPA : ");
        scanf("%s",gpa);
     }
      if(mark>=50 && mark<=54){
        printf("Enter GPA : ");
        scanf("%s",gpa);
      }
      if(mark>=45 && mark<=49){
        printf("Enter GPA : ");
        scanf("%s",gpa);
      }
     if(mark>=40 && mark<=44){
		 printf("Enter GPA : ");
        scanf("%s",gpa);
     }



        fprintf(file,"%d\t\t%s\n",mark,gpa);
        fclose(file);
    }

    return 0 ;


}







