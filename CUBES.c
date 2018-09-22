#include <stdio.h>
int main()
{
    int i,j,k,ans,a[101];
    for(i=1; i<=100; i++)
        a[i]=i*i*i;
    for(ans=6; ans<=100; ans++)
    for(i=2; i<101; i++)
    {
        for(j=i+1; j<101; j++)
        {
            for(k=j+1; k<101; k++)
            {
                if(a[ans]==a[i]+a[j]+a[k])
                    printf("Cube = %d, Triple = (%d,%d,%d)\n",ans,i,j,k);
            }
        }
    }
    return 0;
}