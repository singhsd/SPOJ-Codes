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
    int t,num,den,i,k; char c[15];
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        i=0;den=1;k=0;num=0;
       while((c[i]=getchar())!='\n')
       {
           if(c[i-1]=='.')
            k=1;
           if(k==1)
            {
                num=num*10+c[i]-'0';
                den*=10;
            }
           i++;
       }
       k=gcd(den,num);
       printf("%d\n",den/k);
    }
    return 0;
}
