#include <stdio.h>
int a[1000];
int ch[21][21];
int main()
{
    int t,i,j,n,m,k,u,p,count;
    char c;
    scanf("%d",&t);
    u=0;
    while(u<t)
    {
        i=0;
        scanf("%d%d",&n,&m);
        getchar();
        if(n>0 && m>0){
        while((c=getchar())!='\n')
        {
            if(c==' ')
            {a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=0;}
            else if(c=='A')
            {a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=1;}
            else if(c=='B')
            {a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=0;}
            else if(c=='C')
            {a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=1;}
            else if(c=='D')
            {a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=0;}
            else if(c=='E')
            {a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=1;}
            else if(c=='F')
            {a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=0;}
            else if(c=='G')
            {a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=1;}
            else if(c=='H')
            {a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=0;}
            else if(c=='I')
            {a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=1;}
            else if(c=='J')
            {a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=1;a[i++]=0;}
            else if(c=='K')
            {a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=1;a[i++]=1;}
            else if(c=='L')
            {a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=0;a[i++]=0;}
            else if(c=='M')
            {a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=0;a[i++]=1;}
            else if(c=='N')
            {a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=1;a[i++]=0;}
            else if(c=='O')
            {a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=1;a[i++]=1;}
            else if(c=='P')
            {a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=0;}
            else if(c=='Q')
            {a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=0;a[i++]=1;}
            else if(c=='R')
            {a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=0;}
            else if(c=='S')
            {a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=1;a[i++]=1;}
            else if(c=='T')
            {a[i++]=1;a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=0;}
            else if(c=='U')
            {a[i++]=1;a[i++]=0;a[i++]=1;a[i++]=0;a[i++]=1;}
            else if(c=='V')
            {a[i++]=1;a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=0;}
            else if(c=='W')
            {a[i++]=1;a[i++]=0;a[i++]=1;a[i++]=1;a[i++]=1;}
            else if(c=='X')
            {a[i++]=1;a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=0;}
            else if(c=='Y')
            {a[i++]=1;a[i++]=1;a[i++]=0;a[i++]=0;a[i++]=1;}
            else if(c=='Z')
            {a[i++]=1;a[i++]=1;a[i++]=0;a[i++]=1;a[i++]=0;}
        }
        count=i;p=0;k=0;
        while(p<count)
        {
            for(j=k; j<m-k && p<count; j++)
                {ch[k][j]=a[p];a[p++]=0;}
            for(i=k+1; i<n-k && p<count; i++)
                {ch[i][m-k-1]=a[p];a[p++]=0;}
            for(j=m-k-2; j>=k && p<count; j--)
                {ch[n-1-k][j]=a[p];a[p++]=0;}
            for(i=n-2-k; i>k && p<count; i--)
                {ch[i][k]=a[p];a[p++]=0;}
            k++;
        }
        printf("%d ",u+1);
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            {
                printf("%d",ch[i][j]);
                ch[i][j]=0;
            }
            printf("\n");
        }
        u++;
    }
    return 0;
}
