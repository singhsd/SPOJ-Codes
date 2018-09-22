#include <stdio.h>
int main()
{
    int a,b,k;
    while(1)
    {
        k=0;
        scanf("%d%d",&a,&b);
        if(a==-1 && b==-1)
            return 0;
        else
        {
            if(a<b)
            {
                a=a+b;
                b=a-b;
                a=a-b;
            }
            while(a>0)
            {
                a-=(b+1);
                k++;
            }
            printf("%d\n",k);
        }
    }
    return 0;
}
