#include <stdio.h>
int main()
{
    int n,i,a[300010];
    char c[300000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
            c[i]='A'+(i-1)%3;
            c[a[i]]='A'+(i-1)%3;
        }
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            if(c[i]=='A')
                c[i]='B';
            else if(c[i]=='B')
                c[i]='C';
            else if(c[i]=='C')
                c[i]='A';
        }
        else
        {
            if(c[i]=='A')
                c[i]='C';
            else if(c[i]=='B')
                c[i]='A';
            else if(c[i]=='C')
                c[i]='B';
        }
        printf("%c",c[i]);
    }
    return 0;
}
