#include <algorithm>
#include <cstdio>
#define min(a,b) (a<b?a:b)
int mix[105],dp[103][103],sum[103];

int fun( int l, int r )
{
	if(l==r)
		return 0;
	if(dp[l][r])
		return dp[l][r];
	int &ans=dp[l][r];
	ans=1000000000;
	for( int k=l; k<r; k++)
	{
		int cost = ((sum[k]-sum[l-1])%100) * ((sum[r]-sum[k])%100);
		ans= min(ans, cost+fun(l,k)+fun(k+1,r) );
	}
	return ans;
}

int main()
{
	int n,i,s,j;
	while( (scanf("%d",&n)) != -1 )
	{
		s=0;
		sum[0]=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				dp[i][j]=0;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&mix[i]);
			s+=mix[i];
			sum[i+1]=s;
		}
		if(n==1)
			printf("0\n");
		else
		printf("%d\n",fun(1,n));
	}
	return 0;
}