#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    int vowel,consonant;
    vowel= consonant=0;

    file = fopen("s.o","r");
    if (file == NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
       printf("File is opened\n");
      while(!feof(file))
      {
        ch = fgetc(file);
      printf("%c",ch);

      if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
      {
          vowel++;
      }
      else if(ch>'a'&& ch<='z')
        {
        consonant++;
      }

      }
      printf("\n");
      printf("Vowel = %d\n",vowel);
      printf("Consonant = %d",consonant);
    }
    fclose(file);
    return 0;
}

