#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values for a and b: ");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("a=%d,b=%d",a,b);
    
}

