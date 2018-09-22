#include <stdio.h>
int b[1000000];
int main()
{
    int n,i,a,j;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            return 0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            b[a]=i;
        }
        for(i=2; i<n; i++)
        {
            if(b[i]<b[i-1])
            {
                for(j=i; j<=n; j++)
                {
                    if(b[j]>b[i] && b[j]<b[i-1])
                    {
                        printf("no\n");
                        goto next;
                    }
                }
            }
        }
        printf("yes\n");
        next: printf("");
    }
    return 0;
}
