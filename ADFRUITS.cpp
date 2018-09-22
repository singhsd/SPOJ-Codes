#include<bits/stdc++.h>
using namespace std;
int n,m,dp[101][101];
char s1[101],s2[101];
int main()
{
    while(scanf("%s %s",s1,s2)!=EOF)
    {
        n=strlen(s1); m=strlen(s2);
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i==0||j==0) dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int p=dp[n][m];
        int i=n,j=m,k=p-1; char s[p];
        s[p]='\0';
        while(i&&j)
        {
            if(s1[i-1]==s2[j-1])
            {
                s[k--]= s1[i-1];
                i--; j--;
            }
            else
            {
                if(dp[i-1][j]>dp[i][j-1]) i--;
                else j--;
            }
        }
        i=0;j=0;k=0;
        while(k<p)
        {
            while(s1[i]!=s[k]&&k<p)
                printf("%c",s1[i++]);
            while(s2[j]!=s[k]&&k<p)
                printf("%c",s2[j++]);
            printf("%c",s[k]);
            i++; j++; k++;
        }
        while(i<n) printf("%c",s1[i++]);
        while(j<m) printf("%c",s2[j++]);
        cout<<endl;
    }
}
