#include<stdio.h>
void main()
{
    int year;
    printf("Enter year you want to cheak: ");
    scanf("%d",&year);
    
    if(year%100==0)
    {
        if(year%400==0)
            printf("leap year");
        else
            printf("Not leap year");
        
    }
    else 
    {
        if(year%4==0)
            printf("leap year");
        else
            printf("Not leap year");
    }
}