#include<stdio.h>
int main()
{
    int n,i,c=0,sum=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            c=1;

        }
        if(c==0)
        sum=sum+i;
        else
        c=0;
    }
    printf("%d",sum);
}
