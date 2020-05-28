#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#define LL long long
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int m,n;
    while(cin>>m>>n)
    {
      int a[m][n],b[n][m];
      for(int i=0;i<m;i++)
         for(int j=0;j<n;j++)
         cin>>a[i][j];
      for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
      {
          b[i][j]=a[j][i];
      }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
      {
          if(j!=m-1)
         cout<<b[i][j]<<" ";
         else
            cout<<b[i][j]<<endl;
      }
      cout<<endl;
    }
    return 0;
}
