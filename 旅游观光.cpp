//#define LOCAL
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
long long f[10000];
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n;
    while(cin>>n)
    {
        if(n==1)
        {

          cout<<1<<endl;
          }
        else if(n%2==0)
        {
            cout<<n/2-1<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }
    }
    return 0;
}
