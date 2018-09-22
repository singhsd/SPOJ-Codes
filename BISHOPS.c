#include <stdio.h>
#include<string.h>
char c[110];
int main()
{
    int n,ans,i;
    while(scanf("%s",c)!=-1)
    {
        n=strlen(c);
        if(n==1 && c[0]=='1')
    {
        printf("1");
        goto end;
    }
    n=strlen(c)+2; ans=0;

    for(i=n-1; i>=2; i--)
        c[i]=c[i-2];
    c[1]='0';
    c[0]='0';
    for(i=n-1; i>=0; i--)
    {
        if((c[i]-'0')>=1)
        {
            c[i]--;
            break;
        }
        else if((c[i]-'0')==0)
        {
            c[i]=9+'0';
        }
    }
    for(i=n-1; i>=0; i--)
    {
     c[i]=c[i]-'0';
     ans=c[i]*2+ans;
     c[i]=ans%10+'0';
     ans=ans/10;
    }
    int t=0;
    for(i=0; i<n; i++)
    {
        if(c[i]!='0')
            t=1;
        if(t==1)
        {
            printf("%c",c[i]);
        }
    }
    end:
    printf("\n");
    }
        return 0;
}
