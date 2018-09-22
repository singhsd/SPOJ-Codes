#include <stdio.h>
int main()
{
    int t,c,n,i,j;
    scanf("%d",&t);
    c=1;
    while(c<=t)
    {
        scanf("%d",&n);
        printf("Case %d: ",c++);
        j=n%5==0?n:(n+5-n%5)/5;
        for(i=1; i<=j; i++)
        {
            if((n-5*i)%3==0 && n>=5*i)
            {
                printf("%d\n",n-5*i);
                break;
            }
            else if((n-5*i)<3)
            {
                printf("-1\n");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
