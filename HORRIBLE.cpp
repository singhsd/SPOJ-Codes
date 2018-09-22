#include<bits/stdc++.h>
using namespace std;
int a[100002];
long long int tree[400004],lazy[400004];
void propogate(int ss, int se, int i)
{
    tree[i]+=(long long int)(se-ss+1)*lazy[i];
    if(ss!=se)
    {
        lazy[2*i+1]+=lazy[i];
        lazy[2*i+2]+=lazy[i];
    }
    lazy[i]=0;
}

void update(int ss, int se, int l, int r, int i, int k)
{
    if(lazy[i]) propogate(ss,se,i);
    if(l>se||r<ss) return;
    if(l<=ss&&r>=se)
    {
        lazy[i]+=(long)k;
            propogate(ss,se,i);
        return;
    }
    int mid=(ss+se)/2;
    update(ss,mid,l,r,2*i+1,k);
    update(mid+1,se,l,r,2*i+2,k);
    tree[i]=tree[2*i+1]+tree[2*i+2];
    return;
}

long long int get(int ss, int se, int l, int r, int i)
{
    if(lazy[i])
        propogate(ss,se,i);
    if(l>se || r<ss)    return 0;
    if(l<=ss&&r>=se)    return tree[i];
    int m=ss+(se-ss)/2;
    return get(ss,m,l,r,2*i+1)+get(m+1,se,l,r,2*i+2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        for(int i=0; i<4*n; i++)
            lazy[i]=0,tree[i]=0;
        int a[n],x,w,y,z;
        memset(a,0,n);
        for(int i=0; i<c; i++)
        {
            cin>>x;
            if(x==0)
            {
                cin>>w>>y>>z;
                if(z)
                update(0,n-1,w-1,y-1,0,z);
            }
            else
            {
                cin>>y>>z;
                cout<<get(0,n-1,y-1,z-1,0)<<endl;
            }
        }
    }
    return 0;
}
