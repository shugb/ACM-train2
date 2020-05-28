#include<stdio.h>
#include<string.h>
#include<queue>
#include<algorithm>
#define inf 0x3f3f3f3f
#define maxx 5009
using namespace std;
struct ndoe
{
    int u,v,w;
    int next;
}dis[maxx];
int first[maxx];
int dp[maxx];
int xia[maxx];
int M;
void set_dis(int u,int v,int w)
{
    dis[M].u=u;
    dis[M].v=v;
    dis[M].w=w;
    dis[M].next=first[u];
    first[u]=M++;
}
int main()
{
    int m,n;
    while(~scanf("%d%d",&m,&n))
    {
        M=0;
        memset(first,-1,sizeof(first));
        memset(xia,0,sizeof(xia));
        memset(dp,inf,sizeof(dp));
        for(int i=1; i<=m; i++)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            set_dis(a,b,c);
            set_dis(b,a,c);
        }
        dp[1]=0;
        xia[1]=1;
        queue<int>q;
        q.push(1);
        int x;
        while(!q.empty())
        {
            x=q.front();
            q.pop();
            xia[x]=0;
            for(int j=first[x]; j!=-1; j=dis[j].next)
            {
                if(dp[dis[j].v]>dp[x]+dis[j].w)
                {
                    dp[dis[j].v]=dp[x]+dis[j].w;
                    if(xia[dis[j].v]==0)
                    {
                        q.push(dis[j].v);
                        xia[dis[j].v]=1;
                    }
                }
            }
        }
        printf("%d\n",dp[n]);
    }
    return 0;
}
