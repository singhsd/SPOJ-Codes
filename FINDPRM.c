#include <stdio.h>
int a[10000001];
int main()
{
    int t,i,j=0,n;
    a[0]=0;a[1]=0;
    for(i=2; i*i<=10000000; i++)
    {
        if(a[i]==0)
            for(j=i*i; j<=10000000; j+=i)
                a[j]=1;
    }
    for(i=2; i<=10000000; i++)
        a[i]=(!a[i]);
    for(i=2; i<=10000000; i++)
        a[i]=a[i]+a[i-1];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]-a[n/2]);
    }
    return 0;
}
