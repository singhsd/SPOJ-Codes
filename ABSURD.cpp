#include <stdio.h>
int main()
{
    long long int t,c,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long double x,y;
        while(n%10==0) n/=10;
        x=0.95*n; y=1.05*n;
        c=n-(n%10);
        if(c>=x&&c<=y){printf("absurd\n");continue;}
        c+=5;
        if(c>=x&&c<=y&&c!=n){printf("absurd\n");continue;}
        c+=5;
        if(c>=x&&c<=y){printf("absurd\n");continue;}
        printf("not absurd\n");
    }
    return 0;
}
