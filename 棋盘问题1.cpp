#include<bits/stdc++.h>
using namespace std;
#define ll long long
char qipan[10][10];
bool vis[10];
int n,k;
ll ans;
int m;
void dfs(int s)
{
    if(m==k)
    {
        ans++;
        return ;
    }
    if(s>n)
        return ;
    for(int j=1;j<=n;j++)
        if(vis[j]==0&&qipan[s][j]=='#')
    {
        vis[j]=1;
        m++;
        dfs(s+1);
        vis[j]=0;
        m--;
    }
    dfs(s+1);
}
int main()
{
    while(cin>>n>>k&&(n!=-1))
    {
        ans=0;
        m=0;
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>qipan[i][j];
        dfs(1);
        cout<<ans<<endl;
    }
    return 0;
}
