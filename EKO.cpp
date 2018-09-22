#include <iostream>
#include<stdio.h>
using namespace std;
int num[1000009];
int main()
{
    long long int n,m,ans;
    int i,j,u=0;

    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        u=u>j?u:j;
        num[i]=j;
    }
    int l=0,mid;
    while(l<u)
    {
        ans=0;
        mid=l+(u-l)/2+1;
        for(i=0;i<n;i++)
            if(num[i]>=mid)
            ans+=num[i]-mid;
        if(ans<m)
            u=mid-1;
        else
            l=mid;
    }
    printf("%d",l);
    return 0;
}
