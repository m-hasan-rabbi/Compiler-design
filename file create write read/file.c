#include<stdio.h>
int main()
{
    printf("enter 1 for create file \n");
    printf("enter 2 for write file \n");
    printf("enter 3 for read file \n");
    int choice;
    char str[100],str1[1000],ch;
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter create file name : \n");
        fflush(stdin);
        gets(str);
        FILE *file;
        file=fopen(str,"w");
        if(file == NULL)
        {
            printf("file does not create\n");
        }
        else
        {
              printf("file open\n");
              fclose(file);
        }
        break;
    case 2:
        printf("Enter open file name : \n");
        fflush(stdin);
        gets(str);

          file=fopen(str,"a");
        if(file == NULL)
        {
            printf("file does not create\n");
        }
        else
        {
              printf("file open\n");
              printf("write something\n");
              fflush(stdin);
              gets(str1);
              fputs(str1,file);
              fclose(file);
        }
        break;

         case 3:
        printf("Enter open file name : \n");
        fflush(stdin);
        gets(str);

          file=fopen(str,"r");
        if(file == NULL)
        {
            printf("file does not create\n");
        }
        else
        {

                while(! feof(file))
                {
                    ch=getc(file);
                    printf("%c",ch);
                }
              fclose(file);
        }
        break;


    }
}
