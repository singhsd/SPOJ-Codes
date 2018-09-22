#include <bits/stdc++.h>
using namespace std;
int n,m,dp[10003],a,b,visited[10003];
queue<int>q;
vector<list<int> >v(10003);
int fun(int x)
{
    int ans=1,p;
    visited[x]=1;
    q.push(x);
    while(!q.empty()){
        p=q.front(); q.pop();
        for(list<int> :: iterator it=v[p].begin(); it!=v[p].end(); it++)
        {
            if(visited[*it]!=1)
            {
                ans++; visited[*it]=1;
                q.push(*it);
            }
        }
    }
    return ans;
}
int main()
{
    scanf("%d%d",&n,&m);
    while(m--){
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        memset(visited,0,sizeof visited);
        dp[i]=fun(i); ans=max(ans,dp[i]);
    }
    printf("%d\n",ans);
}