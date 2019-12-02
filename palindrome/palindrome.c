#include<stdio.h>
int main()
{
    char str[1000],str1[100];
    printf("enter a string : \n");
    gets(str);
    int len=0,i=0,j=0,count=0;
    for(i=0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("length is %d\n",len);
    len=len-1;
    i=0;
    for(i=len; i>=0 ; i--)
    {
        str1[j]=str[i];
        j++;
    }
    str1[j]='\0';
    printf("reverse is %s \n",str1);

    i=0;
    while(str[i] != '\0' && str1[i] != '\0' )
    {
        if(str[i] == str1[i])
        {
            count=1;
        }
        else
        {
            count=0;
        }
        i++;
    }
    if(count==1)
    {
        printf("palindrome");
    }
    else
    {
           printf("not palindrome");
    }
}
