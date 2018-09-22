#include <bits/stdc++.h>
using namespace std;
struct node{
long long int best,sum,left,right;
};
node tree[200005];
int a[50002];
node combine(node l, node r)
{
    node temp;
    temp.left=l.left;
    if(l.sum+r.left>temp.left)
        temp.left=l.sum+r.left;
    temp.right=r.right;
    if(r.sum+l.right>temp.right)
        temp.right=r.sum+l.right;
    temp.sum=l.sum+r.sum;
    temp.best=max(l.right+r.left,max(l.best,r.best));
    return temp;
}
void build(int ss, int se, int i)
{
    if(ss==se)
    {
        tree[i].best=a[ss];
        tree[i].sum=a[ss];
        tree[i].left=a[ss];
        tree[i].right=a[ss];
        return;
    }
    int mid=(ss+se)/2;
    build(ss,mid,2*i+1);
    build(mid+1,se,2*i+2);
    tree[i]=combine(tree[2*i+1],tree[2*i+2]);
}

node query(int ss, int se, int l, int r, int i)
{
    if(l<=ss&&r>=se) return tree[i];
    int mid=(ss+se)/2;
    if(r<=mid) return query(ss,mid,l,r,2*i+1);
    if(l>mid) return query(mid+1,se,l,r,2*i+2);
    node ll=query(ss,mid,l,r,2*i+1);
    node rr=query(mid+1,se,l,r,2*i+2);
    return combine(ll,rr);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    build(0,n-1,0);
    int q,a,b;
    scanf("%d",&q);
    while(q--){
        scanf("%d%d",&a,&b);
        printf("%lld\n",query(0,n-1,a-1,b-1,0).best);
    }
    return 0;
}
