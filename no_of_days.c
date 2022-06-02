#include<stdio.h>
int main()
{
    printf("enter the no. of month\n");
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("%d have 31 days",a);
        break;

        case 2:
        printf("%d have 28 days",a);//assume it is not a leap year
        break;

        case 6:
        case 4:
        case 9:
        case 11:
        printf("%d have 30 days",a);
        break;

        default:
        printf("enter the correct no. of the month");


    }
}
