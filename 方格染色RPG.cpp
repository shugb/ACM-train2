#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include <iomanip>
#define offset 1110
#define eps 1e-5
#define LL long long
#define MAXLEN  64
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    long long a[MAXLEN];
     a[1]=3;a[2]=6;a[3]=6;
    for(int i=4;i<MAXLEN;i++)
    {
        a[i]=a[i-1]+a[i-2]*2;
    }
    int n;
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
