#include <math.h>
#include <stdio.h>
#include "NumClass.h"


int isArmstrong(int num)
{
    double ndigit = numDigit(num);
    if(num==isArm(num, ndigit))
    {
        return 0;

    }
    return 1;
}

int isArm(int num, int p)
{
    if(num==0)
    {
        return 0;
    }
    return (isArm(num/10 , p) + pow(num%10 , p));
}
int numDigit(int num)
{
    int n= num;
    int count =0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int isPalindrom(int num)
{
    int nDigit = numDigit(num); 
    if(nDigit==1 || nDigit==0)
    {
        return 0;
    }
    double firstCh = (num / pow(10 ,nDigit-1));
    if(num%10!= (int)firstCh)
    {
        return 1;
    }
    num-= ((int)(firstCh*pow(10, nDigit-1)));
    num%=10;
    return isPalindrom(num);
}

int main()
{
    int a = isPalindrom(15551);
    printf("%d", a);
}