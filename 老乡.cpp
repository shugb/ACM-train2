//#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include <iomanip>
#define offset 10000
#define eps 1e-5
#define LL long long
using namespace std;
int father[500001];
int find(int x)
{
    if(x!=father[x])
     father[x]=find(father[x]);
     return father[x];
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n,q,flag=0;
    while(cin>>n>>q)
    {
        memset(father,0,sizeof(father));
           for(int i=1;i<=n;i++)
        {
            father[i]=i;
        }
            for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            int x=find(a);
            int y=find(b);
            if(x!=y)
            {
                father[y]=x;
            }
        }
        cout<<"Case "<<++flag<<endl;
        for(int i=1;i<=q;i++)
        {
            int x,y;
            cin>>x>>y;
            if(find(x)!=find(y))
            {
                cout<<"NO"<<endl;
            }
           else
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
