#include<bits/stdc++.h>
using namespace std;
int bit[100002],n;
void up(int x, int val)
{
    for(; x<=100002; x+=x&-x)
        bit[x]+=val;
}
int query(int x)
{
    int ans=0;
    for(; x>0; x-=x&-x)
        ans+=bit[x];
    return ans;
}
int main()
{
    memset(bit, 0, sizeof bit);
    scanf("%d",&n); int l,r,q1,q2;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&l,&r);
        q1=query(l);
        q2=query(r);
        up(l,-q1);
        up(r,-q2);
        up(l+1,q1);
        up(r+1,q2);
        up(l+1,1);
        up(r,-1);
        printf("%d\n",q1+q2);
    }
}