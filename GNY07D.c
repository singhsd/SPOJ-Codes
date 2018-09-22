#include <stdio.h>
char a[1000];
int b[21][21];
int main()
{
    int t,i,j,k,x,y,l,u=1,p;
    scanf("%d",&t);
    while(u<=t)
    {
        scanf("%d%d",&x,&y);
        scanf("%s",a);
        k=0;
        printf("%d ",u++);
        for(i=0; i<x; i++)
            for(j=0; j<y; j++)
                b[i][j]=a[k++]-'0';
        k=0;l=0; p=x*y;
        while(l<p)
        {
            for(j=k; j<y-k && l<p; j++)
                a[l++]=b[k][j]+'0';
            for(i=k+1; i<x-k && l<p; i++)
               a[l++]=b[i][y-k-1]+'0';
            for(j=y-k-2; j>=k && l<p; j--)
                a[l++]=b[x-1-k][j]+'0';
            for(i=x-2-k; i>k && l<p; i--)
                a[l++]=b[i][k]+'0';
            k++;
        }
        for(i=0; i<l-4; i+=5)
        {
            if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0')
                printf(" ");
            else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='1')
                printf("A");
            else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='1' && a[i+4]=='0')
                printf("B");
            else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='1' && a[i+4]=='1')
                printf("C");
            else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='0' && a[i+4]=='0')
                printf("D");
            else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='0' && a[i+4]=='1')
                printf("E");
            else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='0')
                printf("F");
            else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1')
                printf("G");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0')
                printf("H");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='1')
                printf("I");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='1' && a[i+4]=='0')
                printf("J");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='1' && a[i+4]=='1')
                printf("K");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='0' && a[i+4]=='0')
                printf("L");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='0' && a[i+4]=='1')
                printf("M");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='0')
                printf("N");
            else if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1')
                printf("O");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0')
                printf("P");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='1')
                printf("Q");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='1' && a[i+4]=='0')
                printf("R");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='1' && a[i+4]=='1')
                printf("S");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='0' && a[i+4]=='0')
                printf("T");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='0' && a[i+4]=='1')
                printf("U");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='0')
                printf("V");
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1')
                printf("W");
            else if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0')
                printf("X");
            else if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='1')
                printf("Y");
            else if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='1' && a[i+4]=='0')
                printf("Z");
        }
        printf("\n");
    }
    return 0;
}
