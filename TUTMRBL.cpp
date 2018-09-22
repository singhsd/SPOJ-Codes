#include <stdio.h>
int b[10000000];
int a[10000090];
int main()
{
    int i,j,k;
    for(i=2; i<=32000; i++)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<=10000000; j+=i)
                if(a[j]==0)
                a[j]=i;
        }
    }
    int n,ans,temp;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            return 0;
        else
        {
            temp=n;
            ans=1;
            printf("%d = ",n);
            i=1;
            b[0]=0;
            while(n>0)
            {
                if(a[n]!=0)
                {
                    printf("%d",a[n]);
                    b[i++]=a[n];
                    n/=a[n];
                    printf(" * ");
                }
                else if(a[n]==0)
                {
                    b[i++]=n;
                    printf("%d\n",n);
                    break;
                }
            }
            n=temp;
            temp=i;
            i=1; j=1; k=0;
            while(j<temp)
            {
                if(b[i]==b[j])
                {
                    b[k]++;
                    j++;
                }
                else
                {
                    i=j;
                    k++;
                    b[k]=0;
                }
            }
            for(i=0; i<=k; i++)
                ans*=(b[i]+1);
            ans=(ans/2)+(ans%2);
            printf("With %d marbles, %d different rectangles can be constructed.\n",n,ans);
        }
    }
    return 0;
}

