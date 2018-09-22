#include<bits/stdc++.h>
using namespace std;
int a[100001],n,c;
int fun(int k)
{
    int nc=1,prev=a[0];
    for(int i=2; i<n; i++)
    {
        if(nc==c) break;
        if(a[i]-prev>=k)
        {
            prev=a[i];
            nc++;
        }
    }
    if(nc==c) return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&c);
        for(int i=0; i<n; i++) scanf("%d",&a[i]);
        sort(a,a+n);
        int i=0,j=a[n-1]-a[0];
        while(i<j)
        {
            int mid=i+(j-i)/2;
            if(fun(mid)) i=mid+1;
            else j=mid-1;
        }
        if(fun(i)) printf("%d\n",i);
        else printf("%d\n",i-1);
    }
}
