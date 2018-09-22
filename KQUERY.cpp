#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n,a[30000+3];
vector<vector<int> >tr(30000*4+1);
void build(int l, int r, int i)
{
    if(l>r || i>4*30000) return;
    if(l==r)
    {
        tr[i].push_back(a[l]); return;
    }
    build(l,(l+r)/2,2*i+1); build((l+r)/2+1,r,2*i+2);
    int x=0,y=0,z=0;
    while(x<tr[2*i+1].size()&&y<tr[2*i+2].size())
    {
        if(tr[2*i+1][x]<tr[2*i+2][y])
            tr[i].push_back(tr[2*i+1][x++]);
        else tr[i].push_back(tr[2*i+2][y++]);
    }
    while(x<tr[2*i+1].size()) tr[i].push_back(tr[2*i+1][x++]);
    while(y<tr[2*i+2].size()) tr[i].push_back(tr[2*i+2][y++]);
}
int query(int ss, int se, int l, int r, int i, int k)
{
    if(se<l||ss>r) return 0;
    if(l<=ss&&se<=r)
    {
        vector<int>::iterator it= lower_bound(tr[i].begin(),tr[i].end(),k+1);
        return tr[i].end()-it;
    }
    return query(ss,(ss+se)/2,l,r,2*i+1,k)+query((ss+se)/2+1,se,l,r,2*i+2,k);
}
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    build(0,n-1,0);
    int q; scanf("%d",&q);
    while(q--)
    {
        int l,r,k; scanf("%d%d%d",&l,&r,&k);
        printf("%d\n",query(0,n-1,l-1,r-1,0,k));
    }
}
