#include <stdio.h>
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}
int main()
{
    int t,test,n;
    char s[251];
    scanf("%d",&test);
    for(t=0; t<test; t++)
    {
        int ans=0,i=-1;
        scanf("%d",&n);
        scanf("%s",s);
        if(n==0)
        {
            printf("%s\n",s);
            goto next;
        }
        while(s[++i])
        {
            ans=(ans*10+s[i]-'0')%n;
        }
        ans=gcd(n,ans);
        printf("%d\n",ans);
        next:
            i=0;

    }
    return 0;
}
