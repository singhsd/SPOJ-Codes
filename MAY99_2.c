#include <stdio.h>
main()
{
    int t,test;
    scanf("%d",&test);
    for(t=0; t<test; t++)
    {
        long long n,i=0,j;
        int a[1000000];
        scanf("%lld",&n);
        n--;
        while(n>=0)
        {
            a[i++]=n%5;
            n/=5;
            if(n==0)
                break;
            n--;
        }
        for(j=i-1; j>=0; j--)
        {
            if(a[j]==0)
                printf("m");
            if(a[j]==1)
                printf("a");
                if(a[j]==2)
                    printf("n");
                if(a[j]==3)
                    printf("k");
                if(a[j]==4)
                    printf("u");
        }
        printf("\n");
    }
}
