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
    int n;
    while(cin>>n)
    {
        long long t=1,a=1,b=1;
        for(int i=1;i<=n-1;i++)
        {
            t=t*i;
        }
        for(int i=1;i<=n-2;i++)
        {
            a=a*i;
        }
        for(int i=1;i<=n-3;i++)
        {
            b=b*i;
        }
        cout<<t-4*a+2*b<<endl;
    }
    return 0;
}
