#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>

using namespace std;

map<long long int, long long int> dp;

long long int fun(long long int x)
{
    map<long long int, long long int> :: iterator it=dp.find(x);
    if(it!=dp.end())
    return dp[x];
    if(x<=0)
    return 0;
    if(x==1)
    return dp[x]=1;
    long long int i=fun(x/2)+fun(x/3)+fun(x/4);
    return dp[x]=x>i?x:i;
}

int main()
{
    long long int n;
    while( (scanf("%lld",&n)) != -1 )
    cout << fun(n)<<endl;
    return 0;
}