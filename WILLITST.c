#include <stdio.h>
int main()
{
    long long int n,a=0;
    scanf("%lld",&n);
    if(n==1)
    {
        printf("NIE");
        return 0;
    }
    while(n>0)
    {
        a+=n%2;
        n/=2;
    }
    if(a==1)
        printf("TAK");
    else
        printf("NIE");
    return 0;
}
