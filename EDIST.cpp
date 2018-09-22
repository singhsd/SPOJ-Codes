#include<bits/stdc++.h>
using namespace std;
#define min(a,b)  (a<b?a:b)
int dp[2002][2002];
int fun(char* s1, char* s2, int i, int j)
{
    if(i<0&&j<0) return 0;
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(dp[i][j]) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=fun(s1,s2,i-1,j-1);
    int x=fun(s1,s2,i-1,j-1), y=fun(s1,s2,i,j-1), z=fun(s1,s2,i-1,j);
    return dp[i][j]=1+min(x,min(y,z));
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       for(int i=0; i<2002; i++)
        for(int j=0; j<2002; j++)
            dp[i][j]=0;
       char s1[2001],s2[2001];
       cin>>s1>>s2;
       cout<<fun(s1,s2,strlen(s1)-1,strlen(s2)-1)<<endl;
   }
}
