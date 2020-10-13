#include<stdio.h>
int main()
{
    int y=0,z,r,x;
    printf("Enter no: ");
    scanf("%d",&x);
    z=x;
    while(x!=0)
    {
        r = x % 10;
        y = y*10 + r;
        x = x/10;
        
    }
    
    if(z==y)
        printf("Number is pallindrome");
    else
        printf("Number is not pallindrome");
        
    return 0;
}
