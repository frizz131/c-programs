#include<stdio.h>
int main()
{
    int i,a,b,c,min;
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(int i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            
            c=i;
            
            
        }
        
    }
    printf("%d",c);
}
