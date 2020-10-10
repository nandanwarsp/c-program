#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int len,i;
    printf("Enter string: ");
    gets(str); 
    len = strlen(str);
    
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            printf("Not Pallindrome");
            break;
        }
    }
    if(i==len/2)
        printf("Pallindrome");
    return 0;
}