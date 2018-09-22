#include <stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    long long int n;
    int ans;
    while(test-->0)
    {
        scanf("%lld",&n);
        ans=(3*(n)*(n+1)/2-n)%1000007;
        printf("%d\n",ans);
    }
    return 0;
}
