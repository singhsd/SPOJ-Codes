#include<bits/stdc++.h>
using namespace std;
long long int gcd(int a, int b) {return b==0?a:gcd(b,a%b);}
int main()
{
    while(1)
    {
        long long int a,b,c;
        scanf("%lld%lld",&a,&b);
        if(!a&&!b) return 0;
        if(a>b)
        {
            a=a+b; b=a-b; a=a-b;
        }
        c=gcd(a,b);
        printf("%lld\n",a*b/(c*c));
    }
}
