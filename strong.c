#include<stdio.h>
int main()
{
    int i,n,d,f=1,sum=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        d=i%10;
        for(int j=1;j<=d;j++)
        {
            f=f*j;
        }
        sum=sum+f;
        f=1;
    }
    if(sum==n)
    printf("strong number");
    else
    printf("not a strong number");

}
