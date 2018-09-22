#include <stdio.h>
int a[121],b[121];
int main()
{
    int t,n,x,y,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x,&y);
            a[x]++;
            b[y]++;
        }
        x=0; y=0;
        for(i=0; i<=120; i++)
        {
            if(a[i]!=0)
            {
                x++;
                a[i]=0;
            }
            if(b[i]!=0)
            {
                y++;
                b[i]=0;
            }
        }
        printf("%d\n",x<=y?x:y);
    }
    return 0;
}
