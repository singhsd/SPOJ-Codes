#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,x,y,e,vi[100001];
vector<list<int> >v(100001);
void fun(int i)
{
    vi[i]=1;
    for(list<int>::iterator it=v[i].begin(); it!=v[i].end(); it++)
        if(vi[*it]==-1) fun(*it);
    return;
}
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
        scanf("%d\n%d",&n,&e);
        for(int i=0; i<n; i++)
        {
            v[i].clear();
            vi[i]=-1;
        }
        while(e--)
        {
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(vi[i]==-1)
            {
                ans++;
                fun(i);
            }
        }
        cout<<ans<<endl;
    }
}
