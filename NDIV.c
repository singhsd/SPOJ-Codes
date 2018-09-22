#include <stdio.h>
long long int b[100000];
int main()
{
    long long int x,y;
    int count=0,n;
    scanf("%lld%lld%d",&x,&y,&n);
    if(x==1)
    b[0]=-1;
    int i,j;
    for(i=2; i*i<=y; i++)
    {
        for(j=x%i==0?x:(x+i-x%i); j<=y; j+=i)
        {
            if(i*i==j)
                b[j-x]++;
            else
            if(i<j/i)
                b[j-x]+=2;
        }
    }
    count=0;
    for(i=x; i<=y; i++)
    {
        if(b[i-x]==n-2)
            count++;
    }
    printf("%d",count);
    return 0;
}
