#include<stdio.h>
int main()
{
    char a;
    printf("enter the alphabet\n");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("it is a vowel");
        break;

        case'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("it is a vowel");
        break;

        default:
        printf("it is a consonant");

    }
}
