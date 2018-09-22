#include <bits/stdc++.h>
using namespace std;
int n,dp[32][260];
char s[32];
int fun(int i, int j)
{
    if(i==n) return 1;
    int &ans=dp[i][j];
    if(ans!=-1) return ans;
    ans=0;
    for(int k=i,sum=0; k<n; k++){
        sum+=s[k]-'0';
        if(sum>=j) ans+=fun(k+1,sum);
    }
    return ans;
}
int main()
{
     int ans,cas=1;
     while(1){
        scanf("%s",s); if(s[0]=='b') return 0;
        n=strlen(s);
        memset(dp,-1,sizeof dp);
        ans=fun(0,0);
        printf("%d. %d\n",cas++,ans);
    }
}