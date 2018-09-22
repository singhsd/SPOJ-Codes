#include <stdio.h>
int a[1000000];
int b[3000];
int main()
{
    int i,j,t,n;
    for(i=2; i<3000; i++)
    {
        if(a[i]==0)
        {
            for(j=2*i; j<=3000; j+=i)
            {
                a[j]++;
            }
        }
    }
    j=0;
        for(i=2; i<3000; i++)
        {
            if(a[i]>=3)
                b[j++]=i;
        }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",b[n-1]);
    }
    return 0;
}