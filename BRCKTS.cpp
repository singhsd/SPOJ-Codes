#include<bits/stdc++.h>
using namespace std;
char s[30001];
vector<pair<int,int> > tr(4*30001);
int n,m;
void build(int l, int r, int i)
{
    if(l==r)
    {
        if(s[l]=='(')
        {
            tr[i].first=1;
        tr[i].second=0;
        }
        else
        {
            tr[i].first=0;
        tr[i].second=1;
        }
        return;
    }
    int mid= l+(r-l)/2;
    build(l,mid,2*i+1);
    build(mid+1,r,2*i+2);
    int paired=min(tr[2*i+1].first,tr[2*i+2].second);
    tr[i].first=tr[2*i+1].first+tr[2*i+2].first-paired;
    tr[i].second=tr[2*i+1].second+tr[2*i+2].second-paired;
    return;
}
int query(void)
{
    if(tr[0].first==tr[0].second&&tr[0].first==0)
        return 1;
    return 0;
}
void update(int ss, int se, int i, int k)
{
    if(k<ss||k>se) return;
    if(ss==se&&ss==k)
    {
        if(s[k]=='(')
        {
            tr[i].first=1;
        tr[i].second=0;
        }
        else
        {
            tr[i].first=0;
        tr[i].second=1;
        }
    }
    else
    {
        int mid=ss+(se-ss)/2;
        update(ss,mid,2*i+1,k);
        update(mid+1,se,2*i+2,k);
        int paired=min(tr[2*i+1].first,tr[2*i+2].second);
    tr[i].first=tr[2*i+1].first+tr[2*i+2].first-paired;
    tr[i].second=tr[2*i+1].second+tr[2*i+2].second-paired;
    return;
    }
}

int main()
{
    int t=10,l;
    while(t--)
    {
        scanf("%d\n%s\n%d",&n,s,&m);
        build(0,n-1,0);
        printf("Test %d:\n",10-t);
        while(m--)
        {
            scanf("%d",&l);
            if(l!=0) {
                    l--;
            s[l]=s[l]=='('?')':'(';
                    update(0,n-1,0,l);
            }
            else printf("%s\n",query()?"YES":"NO");
        }
    }
}
