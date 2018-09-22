#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n1,n2,k,t,dp[101][101][101],dp2[101][101];
char s1[103],s2[102];
int fun(int i, int j, int k)
{
    if(i<0||j<0||k<=0) return 0;
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    int &ans=dp[i][j][k];
    if(s1[i]==s2[j])
    {
        ans=max(ans,(int)s1[i]+fun(i-1,j-1,k-1));
        ans=max(ans,fun(i-1,j-1,k));
    }
    else
    {
        ans=max(ans,max(fun(i-1,j,k),fun(i,j-1,k)));
    }
    //cout<<i<<" "<<j<<" "<<k<<" "<<dp[i][j][k]<<endl;
    return ans;
}
int lcs(int i, int j)
{
    if(i<0||j<0) return 0;
    if(dp2[i][j]!=-1) return dp2[i][j];
    if(s1[i]==s2[j]) dp2[i][j]=1+lcs(i-1,j-1);
    else dp2[i][j]=max(lcs(i-1,j),lcs(i,j-1));
    return dp2[i][j];
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2>>k;
        n1=strlen(s1); n2=strlen(s2);
        memset(dp,-1,sizeof dp);
        memset(dp2,-1,sizeof dp2);
        if(lcs(n1-1,n2-1)<k)
        {
            printf("0\n");
            continue;
        }
        cout<<fun(n1-1,n2-1,k)<<endl;
    }
}
