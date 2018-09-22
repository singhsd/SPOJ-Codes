#include<bits/stdc++.h>
using namespace std;
char s1[6101],s2[6101];
int dp[6103][6103];
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s1);
        n=strlen(s1);
        for(int i=0; i<n; i++)
            s2[n-1-i]=s1[i];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(!i||!j) dp[i][j]=0;
                else{
                    if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                    else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        printf("%d\n",n-dp[n][n]);
    }
}
