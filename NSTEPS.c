#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int x,y;
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        if(x==y || x-y==2)
        {
            if(x==y)
            {
               if(x%2==0)
                    printf("%lld\n",2*x);
               else
                    printf("%lld\n",2*x-1);
            }
            else if(x-y==2)
            {
                if(x%2==0)
                    printf("%lld\n",2*x-2);
                else
                    printf("%lld\n",2*x-3);
            }
        }
        else
            printf("No Number\n");
    }
    return 0;
}
