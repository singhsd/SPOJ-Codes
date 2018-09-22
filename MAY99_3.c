#include <stdio.h>
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t,test,temp;
    scanf("%d",&test);
    for(t=0; t<test; t++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(c>a && c>b)
            printf("NO\n");
        else{
        if(a<b)
        {
            temp=a; a=b; b=temp;
        }
        if(c%gcd(a,b)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    }
    return 0;
}
