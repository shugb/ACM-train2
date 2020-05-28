#define LOCAL
#include<iostream>
#include<queue>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include<algorithm>
#include <iomanip>
#define offset 10000
#define eps 1e-5
#define LL long long
#define MAX_ROW 5
#define MAX_COL 5
using namespace std;
int map[10][10], vis[10][10];

int f[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

struct node
{
    int x, y, st;
    int rute[25][2];
};

bool check(node b)
{
    if(vis[b.x][b.y]) return 1;
    if(b.x < 0 || b.y  < 0 || b.x > 4 || b.y > 4)return 1;
    else if(map[b.x][b.y] == 1) return 1;
    return 0;
}

node bfs()
{
    memset(vis, 0, sizeof(vis));
    node s, nex;
    s.x = 0, s.y = 0, s.st = 0, s.rute[s.st][0] = s.x, s.rute[s.st][1] = s.y;
    queue<node> q;
    q.push(s);
    while(!q.empty())
    {
        node a = q.front();
        q.pop();
        if(a.x == 4 && a.y == 4)return a;
        for(int i = 0; i < 4; i++)
        {
            nex = a;
            nex.x += f[i][0];
            nex.y += f[i][1];
            if(check(nex)) continue;
            nex.st += 1;
            nex.rute[nex.st][0] = nex.x, nex.rute[nex.st][1] = nex.y;
            q.push(nex);
        }
    }
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n,flag=0;
    cin>>n;
    while(n)
   {
       for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }
    node ans = bfs();
    cout<<"Case "<<++flag<<":"<<endl;
    for(int i = 0; i <= ans.st; i++)
    {
        printf("(%d, %d)\n", ans.rute[i][0], ans.rute[i][1]);
    }
    n--;
   }
    return 0;
}
