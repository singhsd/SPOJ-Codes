#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; scanf("%d",&t);long long int ans,n,m;
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        if(n>m) {n=n+m;m=n-m;n=n-m;}
        ans=(n-1+(m-1)*(2*n-1));
        printf("%lld\n",ans);
    }
}