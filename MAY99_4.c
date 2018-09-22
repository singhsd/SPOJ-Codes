#include <stdio.h>
#define m 10000007
long long int a[101][101];
int main()
{
    int i,j;
    for(i=0; i<101; i++)
    {a[i][0]=1;a[i][1]=i;}
    for(i=1; i<101; i++)
        for(j=1; j<=i; j++)
            a[i][j]=(a[i-1][j]+a[i-1][j-1])%m;
    int n,r;
    scanf("%d%d",&n,&r);
    if(n<r)
        printf("-1");
    else
    printf("%lld",a[n-1][r-1]);
    return 0;
}
