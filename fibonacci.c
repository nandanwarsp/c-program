#include<stdio.h>
int main()
{
    int i,no,c,a=-1,b=1;
    printf("Enter no of terms you want");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        c = a+b;
        printf("%d\1t",c);
        a = b;
        b = c;
    }
    return 0;
}
#https://www.youtube.com/watch?v=I_faTZ5RZXU&t=730s