#include <stdio.h>

long long myPowerR(long long a, int n)//R for recursive
{
    if(n==0||a==1)
        return 1;
    if(n%2==0)
        return myPowerR(a*a,n/2);
    else 
        return myPowerR(a*a,n/2)*a;
}

int main()
{
    long long testPower = myPowerR(2,62);
    printf("%lld",testPower);
}