#include<stdio.h>
int main()
{
    int i,a,b,c,max;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    for(int i=1;i<=(a*b);i++)
    {
        if(i%a==0 && i%b==0)
        {
            
            c=i;
            
            
        }
        
    }
    printf("%d",c);
}
