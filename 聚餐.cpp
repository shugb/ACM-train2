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
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n,m;
    while(cin>>m>>n)
    {
        long long a=1,b=1;
        for(int i=1;i<=n-1;i++)
       {
           a=a*i;
       }
        for(int i=n-m+1;i<=n;i++)
        {
            b=b*i;
        }
        cout<<a*b<<endl;
    }
    return 0;
}
