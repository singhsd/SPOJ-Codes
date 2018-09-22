#include <stdio.h>
int all_friends[100000];
int main()
{
    int t,i=0,j=0,n,x,count=0,friends[200];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&friends[i++],&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&x);
            all_friends[x]=1;
        }
    }
    for(j=0; j<i; j++)
        all_friends[friends[j]]=0;
    for(j=0; j<=99999; j++)
    {
        if(all_friends[j]==1)
           {
           	count++;
           	all_friends[j]=0;
           }
    }
    printf("%d",count);
    return 0;
}
