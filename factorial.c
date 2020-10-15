#include<stdio.h>
int main()
{
    int no,fact=1;
    printf("Enter a number: ");
    scanf("%d",&no);
    
    while(no>0)
    {
        fact = fact * no;
        no--;
        
    }
    printf("Factorial is %d",fact);
}

#https://www.youtube.com/watch?v=WCHxVfN6_2E