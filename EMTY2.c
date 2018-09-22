#include <stdio.h>
int main()
{
    int t,i,j;
    char c[120000];
    scanf("%d",&t);
    j=1;
    getchar();
    while(j<=t)
    {
        i=0;
        while((c[i]=getchar())!='\n')
        {
            if(i>1)
            {
                if(c[i]=='0' && c[i-1]=='0' && c[i-2]=='1')
                    i-=2;
                    else
                        i++;
            }
            else
                i++;

        }
        if(i==0)
            printf("Case %d: yes\n",j++);
        else
            printf("Case %d: no\n",j++);
    }
    return 0;
}
