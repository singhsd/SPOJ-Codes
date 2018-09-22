#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    double i;
    while(t--)
    {
        scanf("%d",&n);
        i=(double)n/(n+1);
        printf("%.8lf\n",i);
    }
    return 0;
}
