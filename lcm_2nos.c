#include<stdio.h>
int main()
{
    int a,b,l;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    for(l=1;l<=a*b;l++)
        if(l%a==0&&l%b==0)
            break;
    printf("LCM is %d",l);
    return 0;
    
}

//https://www.youtube.com/watch?v=OhYGk94q3CM