#include <bits/stdc++.h>
using namespace std;
int dp[1000000];

int main()
{
    int m;
    while(scanf("%d",&m)!=EOF){
    memset(dp,0,sizeof dp);
    string p,t;
    cin>>p;
    int i=1,j=0;dp[0]=0;
    while(i<m)
    {
        if(p[i]==p[j])
        {
            dp[i]=j+1;
            i++;j++;
        }
        else if(j) j=dp[j-1];
        else
        {
            dp[i]=0;
            i++;
        }
    }
    cin>>t;i=0;j=0;
    int n=t.size(),f=0;
    while(i<n)
    {
        if(t[i]==p[j])
        {
            if(j==m-1)
            {
                f=1;
                printf("%d\n",i-j);
                j=dp[j-1];
            }
            else i++,j++;
        }
        else if(j) j=dp[j-1];
        else i++;
    }
    if(!f) printf("\n");
    }
}
