#include<bits/stdc++.h>
using namespace std;
int a[100002];
int tree[400004],lazy[400004];
void propogate(int ss, int se, int i)
{
    if(lazy[i]%2)
    tree[i]=(se-ss+1)-tree[i];
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
        lazy[i]+=k;
            propogate(ss,se,i);
        return;
    }
    int mid=(ss+se)/2;
    update(ss,mid,l,r,2*i+1,k);
    update(mid+1,se,l,r,2*i+2,k);
    tree[i]=tree[2*i+1]+tree[2*i+2];
    return;
}

int get(int ss, int se, int l, int r, int i)
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
    int n,m,aa,b,c;
    scanf("%d%d",&n,&m);
    while(m--)
    {
        scanf("%d%d%d",&aa,&b,&c);
        if(aa)
            printf("%d\n",get(0,n-1,b-1,c-1,0));
        else
            update(0,n-1,b-1,c-1,0,1);
    }
    return 0;
}
