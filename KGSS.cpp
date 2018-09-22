#include<bits/stdc++.h>
using namespace std;
int a[100002],aa[4];
struct acc
{
    int first; int second;
};
typedef struct acc abc;
abc tree[400004];
void build_tree(int l, int r, int i)
{
  if(l==r) { tree[i].first=a[l]; tree[i].second=0; return; }
  int mid = l+(r-l)/2;
  build_tree(l,mid,2*i+1);
  build_tree(mid+1,r,2*i+2);
  aa[0]=tree[2*i+1].first;aa[1]=tree[2*i+1].second;
  aa[2]=tree[2*i+2].first; aa[3]=tree[2*i+2].second;
  sort(aa,aa+4);
  tree[i].first=aa[3]; tree[i].second=aa[2];
  return;
}

void update(int ss, int se, int i, int x, int k)
{
  if(x<ss||x>se) return;
  if(x<=ss&&x>=se) { tree[i].first=k; tree[i].second=0; return; }
  int mid=(ss+se)/2;
  update(ss,mid,2*i+1,x,k);
  update(mid+1,se,2*i+2,x,k);
  aa[0]=tree[2*i+1].first;aa[1]=tree[2*i+1].second;
aa[2]=tree[2*i+2].first; aa[3]=tree[2*i+2].second;
  sort(aa,aa+4);
  tree[i].first=aa[3]; tree[i].second=aa[2];
  return;
}

abc get(int ss, int se, int l, int r, int i)
{
    abc tt; tt.first=0; tt.second=0;
  if(l>se||r<ss ||i<0) return tt;
  if(l<=ss&&r>=se) return tree[i];
  int mid=(ss+se)/2;
  abc s1,s2;
  s1=get(ss,mid,l,r,2*i+1);
  s2=get(mid+1,se,l,r,2*i+2);
  aa[0]=s1.first;aa[1]=s1.second; aa[2]=s2.first; aa[3]=s2.second;
  sort(aa,aa+4);
  s1.first=aa[3]; s1.second=aa[2];
  return s1;
}

int main()
{
        int n;
        cin>>n;
        for( int i=0; i<n; i++)
        cin>>a[i];
        build_tree(0,n-1,0);
        int q;char c; int ax,b;
        cin>>q;
        abc p;
        while(q--)
        {
                cin>>c>>ax>>b;
                if(c=='U')
                update(0,n-1,0,ax-1,b);
                else{ p=get(0,n-1,ax-1,b-1,0);
                cout<<p.first+p.second<<endl;}
        }
            return 0;
}
