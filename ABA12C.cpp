#include <bits/stdc++.h>
#define min(a,b) (a<b?a:b)
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,a[101],dp[101];
		scanf("%d%d",&n,&k);
		for(int i=1; i<=k; i++)
			scanf("%d",&a[i]);
		dp[0]=0;
		for(int i=1; i<=k; i++)
				dp[i]=a[i];
		for(int i=2; i<=k; i++)
		{
			for(int j=0; j<i; j++)
			{
				if(a[i-j]==-1 || dp[j]==-1)
					continue;
				if(a[i]==-1)
					dp[i]=dp[j]+a[i-j];
				else
					dp[i]=min(dp[i],dp[j]+a[i-j]);				
			}
		}
		if(k==0)
			printf("0\n");
		else
			printf("%d\n",dp[k]);
	}
	return 0;
}