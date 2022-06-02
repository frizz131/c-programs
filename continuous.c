#include<stdio.h>
int  main()
{
    int n,d,c=0;
    scanf("%d",&n);
    for(int i=n;i>999;i=i/10)
    {
        d=i%10000;
        if(d==1111 || d==0000)
        {
            printf("True");
            c=0;
            break;

        }
        else
        c++;
    }
    if(c>0)
    printf("it does not contaions 4 1's or 4 0's");
}
