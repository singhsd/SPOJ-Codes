#include <iostream>
using namespace std;


int dp[1004][1003][3];

int fun ( int h, int a, int s)
{
	if(h<=0 || a<=0 )
		return 0;
	int ans=1;
	if(s==1||s==0)
	{
		if( dp[h+3][a+2][2]==-1)
			dp[h+3][a+2][2]= fun(h+3,a+2,2);
		ans+=dp[h+3][a+2][2];
	}
	else if(s==2)
	{
		if(a>10)
		{
			if(h>20)
			{	
				if( dp[h-20][a+5][0]==-1 )
					dp[h-20][a+5][0]=fun(h-20,a+5,0);
				if (dp[h-5][a-10][1]==-1)
					dp[h-5][a-10][1]=fun(h-5,a-10,1);
				ans+=dp[h-5][a-10][1]>dp[h-20][a+5][0]?dp[h-5][a-10][1]:dp[h-20][a+5][0];
			}
			else if(h>5)
			{
				if (dp[h-5][a-10][1]==-1)
					dp[h-5][a-10][1]=fun(h-5,a-10,1);
				ans+=dp[h-5][a-10][1];
			}
			else
				ans+=0;
		}
		else
		{
			if(h>20)
			{	
				if( dp[h-20][a+5][0]==-1 )
					dp[h-20][a+5][0]=fun(h-20,a+5,0);
				ans+=dp[h-20][a+5][0];
			}
			else
				ans+=0;
		}
	}
	return dp[h][a][s]=ans;
}

int main()
{
	int t,a,h,i,j;
	for(i=0;i<1004;i++)
		for(j=0;j<1003;j++)
		{
			dp[i][j][0]=-1;
			dp[i][j][1]=-1;
			dp[i][j][2]=-1;
		}
	cin >> t;
	while(t--)
	{
		cin >> h >> a;
		cout << fun(h+3,a+2,2) << endl;
	}
	return 0;
}

// sudo apt-get upgrade