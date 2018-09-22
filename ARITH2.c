#include <stdio.h>
int main()
{
    int t,i;
    long long int n1,n2;
    char c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n1);
        while(1)
        {
            while((c=getchar())==' ');
            if(c=='=')
                break;
            scanf("%lld",&n2);
            if(c=='+')
                n1+=n2;
            else if(c=='-')
                n1-=n2;
            else if(c=='*')
                n1*=n2;
            else if(c=='/')
                n1/=n2;
            else if(c=='%')
                n1%=n2;
        }
        printf("%lld\n",n1);
    }
    return 0;
}
