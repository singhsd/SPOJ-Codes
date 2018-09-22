#include <stdio.h>
int chess[8][8];
typedef struct
{
    int x;
    int y;
}abc;
int head=0,tail=0,a2,b2;
abc queue[1000];
void enqueue(abc k)
{
    queue[head].x=k.x;
    queue[head++].y=k.y;
}
abc deque(void)
{
    return queue[tail++];
}
abc bfs(int i, int j)
{
    abc str;
    int k=chess[i][j]+1;
    if(i+2<8 && j-1>=0 && chess[i+2][j-1]==-1)
    {
        chess[i+2][j-1]=k;
        str.x=i+2; str.y=j-1;
        if(i+2==a2 && j-1==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    if(i+2<8 && j+1<8 && chess[i+2][j+1]==-1)
    {
        chess[i+2][j+1]=k;
        str.x=i+2; str.y=j+1;
        if(i+2==a2 && j+1==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    if(i+1<8 && j+2<8 && chess[i+1][j+2]==-1)
    {
        chess[i+1][j+2]=k;
        str.x=i+1; str.y=j+2;
        if(i+1==a2 && j+2==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    if(i-1>=0 && j+2<8 && chess[i-1][j+2]==-1)
    {
        chess[i-1][j+2]=k;
        str.x=i-1; str.y=j+2;
        if(i-1==a2 && j+2==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    if(i-2>=0 && j-1>=0 && chess[i-2][j-1]==-1)
    {
        chess[i-2][j-1]=k;
        str.x=i-2; str.y=j-1;
        if(i-2==a2&& j-1==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    if(i-2>=0 && j+1<8 && chess[i-2][j+1]==-1)
    {
        chess[i-2][j+1]=k;
        str.x=i-2; str.y=j+1;
        if(i-2==a2 && j+1==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    if(i+1<8 && j-2>=0 && chess[i+1][j-2]==-1)
    {
        chess[i+1][j-2]=k;
        str.x=i+1; str.y=j-2;
        if(i+1==a2 && j-2==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    if(i-1>=0 && j-2>=0 && chess[i-1][j-2]==-1)
    {
        chess[i-1][j-2]=k;
        str.x=i-1; str.y=j-2;
        if(i-1==a2 && j-2==b2)
            {printf("%d\n",k);return str;}
        enqueue(str);
    }
    str=deque();
    return bfs(str.x,str.y);
}
int main()
{
    int t,a1,b1,i,j,ans;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0; i<8; i++)
        for(j=0; j<8; j++)
            chess[i][j]=-1;
        getchar();
        a1=getchar()-'a';
        b1=getchar()-'1';
        getchar();
        a2=getchar()-'a';
        b2=getchar()-'1';
        chess[a1][b1]=0;
        if(a1==a2 && b1==b2)
        {
            printf("0\n");
            continue;
        }
        abc str=bfs(a1,b1);
        head=0;
        tail=0;
    }
    return 0;
}
