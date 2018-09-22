#include <bits/stdc++.h>
using namespace std;
int n,m,vi[8001],e=0,s=0,len=INT_MAX,ll=INT_MAX;
vector<list<int> >v(8001);
int pa[8001],gpa[8001];
void fun(int x)
{
    vi[x]=vi[pa[x]]+1;
    for(list<int> :: iterator it=v[x].begin(); it!=v[x].end(); ++it)
    {   if(*it==0)break;
        if(vi[*it])
        {
            if((abs(vi[x]-vi[*it])+1)%2==0&&*it!=pa[x]&&x!=pa[*it])
            {
                if(len>abs(vi[*it]-vi[x])+1)
                {
                    len=abs(vi[*it]-vi[x])+1;
                    s=x; e=*it;
                }
            }
        }
        else
        {
            pa[*it]=x;fun(*it);
        }
    }
}
int main()
{
    int t,a,b; scanf("%d",&t);
    while(t--){
            e=0;s=0;len=INT_MAX;
        scanf("%d%d",&n,&m);
        while(m--){
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for(int i=1; i<=n; i++)
            {
             memset(vi,0,sizeof vi);
             memset(pa,0,sizeof pa);
             vi[i]=1; fun(i);
             if(ll>len)
             {
                 ll=len;
                 for(int i=0; i<=n; i++)
                    gpa[i]=pa[i];
             }
            }
        int i=s;
        if(len%2==0&&s!=e) {printf("%d\n",len);
        while(i!=e) { printf("%d ",i); i=gpa[i];}
        printf("%d %d\n",e,s);}
        else printf("-1\n");
        for(i=0; i<=n; i++)
            v[i].clear();
    }
}
