#include <stdio.h>
int conv(int n)
{
    switch(n)
    {
        case 10: return 1;
        case 79: return 3;
        case 106: return 4;
        case 63: return 0;
        case 93: return 2;
        case 103: return 5;
        case 119: return 6;
        case 11: return 7;
        case 127: return 8;
        case 107: return 9;
    }
}
void conv2(int n)
{
    switch(n)
    {
        case 0: printf("063");break;
        case 1:printf("010");break;
        case 2:printf("093");break;
        case 3:printf("079");break;
        case 4:printf("106"); break;
        case 5:printf("103");break;
        case 6:printf("119");break;
        case 7:printf("011");break;
        case 8:printf("127");break;
        case 9:printf("107");break;
    }
    return;
}
int main()
{
    int i,n1,n2,n,j;
    char s[1000],c;
    while(1)
    {
        scanf("%s",s);
        if(s[0]=='B')
            break;
        printf("%s",s);
        i=0;n1=0;n2=0;
        while(s[i]!='+')
        {
            n=0;
            for(j=0; j<3; j++)
            {
               n=10*n+s[i++]-'0';
            }
            n1=10*n1+conv(n);
        }
        i++;
        while(s[i]!='=')
        {
            n=0;
            for(j=0; j<3; j++)
            {
               n=10*n+s[i++]-'0';
            }
            n2=10*n2+conv(n);
        }
        n1+=n2;
        n2=n1;i=1;
        while(n2>0)
        {
            n2/=10;
            i*=10;
        }
        i/=10;
        while(i>0)
        {
            conv2(n1/i);
            n1%=i;
            i/=10;
        }
        printf("\n");
    }
    return 0;
}
