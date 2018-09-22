#include <stdio.h>
#include<string.h>
int main()
{
    int t,n,i,count;
    char s[10];
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%s",s);
        n=strlen(s);
        for(i=0; i<n/2; i++)
            if(s[i]==s[n-1-i])
                count++;
        if(count==n/2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
