#include<bits/stdc++.h>
using namespace std;
char s[5001]; int dp[5001],n;
long long int ans;
long long int fun(int i)
{
    if(i>=n) return 1;
    if(dp[i]!=-1) return dp[i];
    if(i==n-1)
    {
        if(s[i]=='0') return dp[i]=0;
        return dp[i]=1;
    }
    if(i==n-2)
    {
        int x= 10*(s[i]-'0')+s[i+1]-'0';
        if(s[i]!='0'&&x>=1&&x<=26) return dp[i]=1+fun(i+1);
        else if(s[i]!='0') return dp[i]=1;
        return dp[i]=0;
    }
    int x= 10*(s[i]-'0')+s[i+1]-'0';
    if(s[i]!='0'&&x>=1&&x<27)
        return dp[i]=fun(i+1)+fun(i+2);
    if(s[i]!='0') return dp[i]=fun(i+1);
    return dp[i]=0;
}
int main()
{
    while(1)
    {
        scanf("%s",s);
        memset(dp,-1,sizeof dp);
        n=strlen(s);
        if(s[0]=='0') break;
        for(int i=1; i<n; i++)
        {
            if(s[i]=='0'){
            int x= 10*(s[i-1]-'0')+s[i]-'0';
            if(x<=0||x>26) {ans=0; goto end;}}
        }
        ans=fun(0);
        end:
        printf("%lld\n",ans);
    }
}
