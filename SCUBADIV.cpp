#include <bits/stdc++.h>
using namespace std;
int nit[1005],oxy[1024],wt[1024],oneed,nneed,dp[1024][30][100];
int fun(int i,int o, int n)
{
    int &ans=dp[i][o][n];
    if(ans!=-1) return ans;
    if(o<=0 && n<=0) return ans=0;
    else if (i<=0) return ans=999999999;
    ans=fun(i-1,o,n);
    ans=min(ans,wt[i-1]+fun(i-1,max(0,o-oxy[i-1]),max(0,n-nit[i-1])));
    return ans;
}
int main(){
    int t; scanf("%d",&t);
    while(t--){
        scanf("%d%d",&oneed,&nneed);
        int n; scanf("%d",&n);
        for(int i=0; i<n; i++) scanf("%d%d%d",&oxy[i],&nit[i],&wt[i]);
        memset(dp,-1,sizeof dp);
        printf("%d\n",fun(n,oneed,nneed));
    }
}