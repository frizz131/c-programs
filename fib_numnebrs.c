#include<stdio.h>
int main()
{
    int a=0,b=1,sum=0,m;
    
    scanf("%d",&m);
    
    while(1)
    {
        sum=a+b;
        
        a=b;
        b=sum;
        if(m==sum)
        {
            printf("yes it exist in fabonacci");
            break;
        }



    }
}
