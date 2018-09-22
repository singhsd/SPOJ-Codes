#include<stdio.h>
int a[33000],ans[100000];
int main()
{
    int t,i,j,x,y;
    a[0]=1; a[1]=1;
    for(i=2; i*i<=32000; i++)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<=32000; j+=i)
            a[j]=1;
        }
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        if(x==1)
            ans[0]=1;
            if(y<=32000)
            {
                for(i=x; i<=y; i++)
                    if(a[i]==0)
                    printf("%d\n",i);
            }
        else
        {
            for(i=2; i<=32000; i++)
            {
                if(a[i]==0)
                {
                    for(j=x%i==0?x:x+i-x%i; j<=y; j+=i)
                        if(i!=j)
                        ans[j-x]=1;
                }
            }
            for(i=x; i<=y; i++)
            {
                if(ans[i-x]==0)
                printf("%d\n",i);
                else
                ans[i-x]=0;
            }
        }
        printf("\n");
    }
    return 0;
}