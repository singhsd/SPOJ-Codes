#include <stdio.h>
int main()
{
    int t,n,count;
    char c;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        while(n--)
        {
            getchar();
            c=getchar();
            getchar();
            getchar();
            if(c=='l')
                count++;
        }
        if(count%2==0)
            printf("hhb\n");
        else
            printf("lxh\n");
    }
    return 0;
}
