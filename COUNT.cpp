#include <bits/stdc++.h>
using namespace std;
// https://www.quora.com/How-do-I-solve-SPOJ-com-Problem-COUNT-I-couldnt-find-recurrence-relation-to-solve-using-DP
int dp[5002][5002],n,k;
int main()
{
    for(int i=0; i<5001; i++)
    {
        for(int j=0; j<5001; j++)
        {
            if(i==0) dp[i][j]=1;
            else if(j==1) dp[i][j]=1;
            else if(j==0) dp[i][j]=0;
            else dp[i][j]=dp[i][j-1]+(i>=j?dp[i-j][j]:0);
            dp[i][j]%=1988;
        }
    }
    while(1){
        scanf("%d%d",&n,&k);
        if(!n&&!k) return 0;
        printf("%d\n",dp[n-k][k]);
    }
}