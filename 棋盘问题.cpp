#include <set>
#include <map>
#include <list>
#include <queue>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <algorithm>
#include<math.h>
using namespace std;
int n, T, num, cnt, p;
char a[9][9];
int vis[9];
int count;
void dfs(int k)
{
   if(num==p)
   {
       cnt++;
       return ;
   }
   if( k >= n ) return ;
   for(int i=0;i<n;i++)
   {
       if(!vis[i] && a[k][i]=='#')
        {
            vis[i] = 1 ;
            num ++ ;
            dfs(k+1);
            num -- ;
            vis[i] = 0 ;
        }
   }
   dfs(k+1);
}
int main()
{
    while(cin>>n>>p)
    {
        if(n==-1&&p==-1) break;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        cnt=0;
        num=0;
        dfs(0);
        cout<<cnt<<endl;
    }
    return 0;
}
