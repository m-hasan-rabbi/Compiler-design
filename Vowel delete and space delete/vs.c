#include<stdio.h>
int main()
{
    char str[100],str1[100];
    printf("enter a string \n");
    gets(str);
    int i=0,j=0;
    while(str[i] != '\0')
    {
        if(str[i] != 'a' &&  str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' )
        {
            str1[j]=str[i];

            j++;
        }
        i++;
    }
    str1[j]='\0';
    puts(str1);
}
