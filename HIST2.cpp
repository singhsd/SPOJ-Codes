#include<bits/stdc++.h>
using namespace std;
int dp[1<<16][16],a[16],n;
long long int np[1<<16][16];
int fun(int m, int idx)
{
    if(m==(1<<n)-1){
        np[m][idx]=1; return a[idx];
    }
    if(dp[m][idx]!=-1) return dp[m][idx];
    int ans=0;
    for(int i=0,val; i<n; i++)
    {
        if((m&(1<<i))==0)
        {
            val=fun(m|(1<<i),i)+abs(a[i]-a[idx]);
            if(val>ans)
            {
                ans=val;
                np[m][idx]=0;
            }
            if(ans==val) np[m][idx]+=np[m|(1<<i)][i];
        }
    }
    return dp[m][idx]=ans;
}
int main()
{
    long long int c;int gs,ls;
    while(scanf("%d",&n)==1&&n){
        for(int i=0; i<n; i++) scanf("%d",&a[i]);
        memset(dp,-1,sizeof dp); gs=0;
        for(int i=0; i<n; i++)
        {
            ls=fun(1<<i,i)+a[i];
            if(ls>gs)
            {
                gs=ls; c=0;
            }
            if(ls==gs)
            c+=np[1<<i][i];
        }
        gs+=(n<<1);
        printf("%d %lld\n",gs,c);
    }
}