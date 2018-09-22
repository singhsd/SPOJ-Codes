#include <stdio.h>
char c[250][250];
int dis[250][250];
typedef struct
{
    int x;
    int y;
}abc;
int head=0,tail=0,a2,b2,a1,b1,n,m;
abc queue[100000];
void enqueue(abc k)
{
    queue[head].x=k.x;
    queue[head++].y=k.y;
}
int peek()
{
    if(head==tail)
        return 1;
    else
        return 0;
}
abc deque(void)
{
    return queue[tail++];
}
abc bfs(int i, int j)
{

    abc str;
    int k=dis[i][j]+1;
    if(c[i+1][j]=='#' && i+1<n && dis[i+1][j]==-1)
        {
            printf("%d\n",k);
            return str;
        }
    if(c[i-1][j]=='#' && i-1>=0 && dis[i-1][j]==-1)
        {
            printf("%d\n",k);
            return str;
        }
    if(c[i][j-1]=='#' && j-1>=0 && dis[i][j-1]==-1)
        {
            printf("%d\n",k);
            return str;
        }
    if(c[i][j+1]=='#' && j+1<m && dis[i][j+1]==-1)
        {
            printf("%d\n",k);
            return str;
        }
    if(c[i+1][j]=='O' && i+1<n && dis[i+1][j]==-1)
    {
        dis[i+1][j]=k;
        str.x=i+1; str.y=j;
        enqueue(str);
    }
    if(c[i-1][j]=='O' && i-1>=0 && dis[i-1][j]==-1)
    {
        dis[i-1][j]=k;
        str.x=i-1; str.y=j;
        enqueue(str);
    }
    if(c[i][j-1]=='O' && j-1>=0 && dis[i][j-1]==-1)
    {
        dis[i][j-1]=k;
        str.x=i;str.y=j-1;
        enqueue(str);
    }
    if(c[i][j+1]=='O' && j+1<m && dis[i][j+1]==-1)
    {
        dis[i][j+1]=k;
        str.x=i; str.y=j+1;
        enqueue(str);
    }
    if(head==tail)
    {
        printf("-1\n");
        return str;
    }
    str=deque();
    return bfs(str.x,str.y);
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                c[i][j]=getchar();
                dis[i][j]=-1;
                if(c[i][j]=='$')
                {
                    a1=i;b1=j;
                }
                else if(c[i][j]=='#')
                {
                    a2=i;b2=j;
                }
            }
            getchar();
        }
        dis[a1][b1]=0;
        abc str=bfs(a1,b1);
        head=0; tail=0;
    }
    return 0;
}
