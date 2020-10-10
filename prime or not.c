#include<stdio.h>
void main()
{   
    int x,i;
    printf("Enter no.");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
        if(x%i==0)
            break;
    if(i==x)
        printf("%d is prime number",x);
    else
        printf("%d is not prime number",x);
}