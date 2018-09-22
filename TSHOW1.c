// use the same concept as MANKU problem (MAY99_2)....see that too
#include <stdio.h>
int main()
{
    int t,test;
    scanf("%d",&test);
    for(t=0; t<test; t++)
    {
        long long int n,i=0,j;
        int a[1000000];
        scanf("%lld",&n);
        n--;
        while(n>=0)
        {
            a[i++]=n%2;
            n/=2;
            if(n==0)
                break;
            n--;
        }
        for(j=i-1; j>=0; j--)
        {
            if(a[j]==0)
                printf("5");
            if(a[j]==1)
                printf("6");
        }
        printf("\n");
    }
    return 0;
}
