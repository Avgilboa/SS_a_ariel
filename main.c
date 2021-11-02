#include <stdio.h>
#include "NumClass.h"

int main()
{
    int a;
    int b;
    scanf("%d %d" , &a , &b);
    printf("%d + %d",a , b) ;
    if(b<a)
    {
        int temp =a;
        a=b;
        b=temp;
    }
    printPrime(a,b);
    printArm(a,b);
    printStrong(a,b);
    printPal(a,b);
}


int printPrime(int a, int b)
{
    for (int i=a; i<=b;i++)
    {
        if(isPrime(i)==0)
        {
            printf("%d",i);
        }
    }
    printf("\n");
}
int printArm(int a, int b)
{
    for (int i=a; i<=b;i++)
    {
        if(isArmstrong(i)==0)
        {
            printf("%d",i);
        }
    }
    printf("\n");
}
int printStrong(int a, int b)
{
    {
    for (int i=a; i<=b;i++)
    {
        if(isStrong(i)==0)
        {
            printf("%d",i);
        }
    }
    printf("\n");
}
}
int printPal(int a, int b)
{
    for (int i=a; i<=b;i++)
    {
        if(isPalindrom(i)==0)
        {
            printf("%d",i);
        }
    }
    printf("\n");
}