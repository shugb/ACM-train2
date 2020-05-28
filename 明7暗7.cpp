#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
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
    int i,n,m;
    while(cin>>m>>n)
    {
        int t=0;
        for(i=m+1;i<m+7*n;i++)
        {
            if (i % 7 == 0)
            {
                t++;
            }
          else
          {
            int temp = i;
            while (temp > 0)
            {
                if (temp % 10 == 7)
                {
                    t++;
                    break;
                }
                temp = temp / 10;
            }
          }
          if(t==n)
           {
               cout<<i<<endl;
               break;
           }
        }
    }
    return 0;
}
