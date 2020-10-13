#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int len,i;
    printf("Enter string: ");
    gets(str);
    
    len = strlen(str);
    for(i=0;i<len/2;i++)
        {
         ch = str[i];
         str[i] = str[len-1-i];
         str[len-1-i] = ch;
        }
    printf("Reverse is %s",str);
    return(0);
}
