#include<stdio.h>
int a[1000];
int main()
{
    int t,n,i,j,s,p,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a[0]=1;j=1;s=1;
        for(i=2; i<=n; i++)
        {
            j=0;k=0;
            again:
            p=a[j]*i+k;
            a[j++]=p%10;
            k=p/10;
            if(j!=s)
                goto again;
            else
                while(k>0)
            {
                a[j++]=k%10;
                k/=10;
            }
            s=j;
        }
            for(i=j-1; i>=0; i--)
            {
                printf("%d",a[i]);
                a[i]=0;
            }
            printf("\n");
    }
    return 0;
}
