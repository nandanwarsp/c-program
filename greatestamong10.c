#include <stdio.h>
int main()
{
    int a[10],i,max;
    
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        
    max = a[0];
    
    for(i=1;i<=9;i++)
        if(max<a[i])
            max = a[i];
    printf("Greatest no. is %d",max);
    return 0;
}