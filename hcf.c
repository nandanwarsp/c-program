#include<stdio.h>
int main()
{

    int a,b,h;
    printf("Entewr two numbers: ");
    scanf("%d%d",&a,&b);

    for(h=a<b?a:b; h>=1;h--)
        if(a%h==0&&b%h==0)
            break;
    printf("HCFis%d",h);
    return 0;
}
https://www.youtube.com/watch?v=gh5UNVQ5_Zk