#include <stdio.h>
int a[100008];
int main()
{
    int n,i,j;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            return 0;
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        j=0;
        for(i=1; i<=n; i++)
        {
            if(i==a[i] || i==a[a[i]])
                j++;
        }
        if(j==n)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
    }
    return 0;
}
