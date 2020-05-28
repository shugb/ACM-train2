#define LOCAL
#include<iostream>
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
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int a,b;
    while(cin>>a>>b)
    {
        int sum=0;
        int c[a][b];
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
            cin>>c[i][j];
         for(int i=0;i<b;i++)
          {
                for(int j=0;j<a;j++)
                if(c[j][i]==1)
            {
                sum++;
            }
            cout<<sum;
            if(i!=b-1)
            {
              cout<<" ";
            }
                sum=0;
         }
         cout<<endl;
    }
    return 0;
}
