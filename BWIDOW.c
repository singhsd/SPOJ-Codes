#include <stdio.h>
int max(int a[], int n)
{
    int i,max=0;
    for(i=1; i<n; i++)
    {
        if(a[max]<a[i])
            max=i;
    }
    return max;
}
int a[1001],b[1001];
int main()
{
    int t,n,i,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            a[i]=0; b[i]=0;

            scanf("%d %d",&a[i],&b[i]);
        }
        x=max(a,n);
        b[x]=0;
        y=max(b,n);
        if(a[x]>b[y])
            printf("%d\n",x+1);
        else
            printf("-1\n");
    }
    return 0;
}
