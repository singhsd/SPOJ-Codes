#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m,vi[2003],x,y;
vector<list<int> >v(2003);
int fun(int i, int c)
{
    int j;
    vi[i]=c;
    for(list<int>::iterator it=v[i].begin(); it!=v[i].end(); it++)
    {
        j=*it;
        if(vi[j]!=-1&&vi[j]==c)
        {
            return 0;
        }
        else if(vi[j]==-1)
        {
            if(c==0) j=fun(j,1);
            else j=fun(j,0);
            if(!j) return 0;
        }
    }
    return 1;
}
int main()
{
    int t,u=1,op=1; cin>>t; while(u<=t)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            v[i].clear();
            vi[i]=-1;
        }
        while(m--)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=1; i<=n; i++)
        {
            if(vi[i]==-1)
            {
                op=fun(i,0);
            }
            if(!op) break;
        }
        if(op) printf("Scenario #%d:\nNo suspicious bugs found!\n",u++);
        else printf("Scenario #%d:\nSuspicious bugs found!\n",u++);

    }
}
