#include<bits/stdc++.h>

#define AX 1000000009
using namespace std;
int a[100001],tree[400004];
void build_tree(int l, int r, int i)
{
    if(l==r) { tree[i]=a[l]; return;}
    if(l>r) return;
    int mid=l+(r-l)/2;
    build_tree(l,mid,2*i+1);
    build_tree(mid+1,r,2*i+2);
    tree[i]=min(tree[2*i+1],tree[2*i+2]);
    //return;
}

int get(int ss, int se, int l, int r, int i)
{
    if(l>se || r<ss)    return AX;
    if(l<=ss&&r>=se)    return tree[i];
    int m=ss+(se-ss)/2;
    return min(get(ss,m,l,r,2*i+1),get(m+1,se,l,r,2*i+2));
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int p=1; p<=t; p++)
    {
        int n,q;
        
        scanf("%d%d",&n,&q);
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        build_tree(0,n-1,0);
        int x,y;
        printf("Scenario #%d:\n",p);
        for(int i=0; i<q; i++)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",get(0,n-1,x-1,y-1,0));
        }
    }
    return 0;
}