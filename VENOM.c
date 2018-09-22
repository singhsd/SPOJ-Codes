#include <stdio.h>
#include<math.h>
int main()
{
    int t,n,health,venom,time,heal;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&health,&venom,&heal);
        if(health<venom)
        {
            printf("1\n");
            continue;
        }
        time=ceil((float)(2*heal-venom+sqrt((venom-2*heal)*(venom-2*heal)-8*venom*(heal-health)))/(2*venom));
        printf("%d\n",2*time-1);
    }
    return 0;
}
