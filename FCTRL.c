#include <stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&t);
    while(t--)
    {
        i=0;
        scanf("%d",&n);
        while(n>0)
            {
                i+=n/5;
                n/=5;
            }
            printf("%d\n",i);
    }
    return 0;
}
