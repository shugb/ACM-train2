#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#define MAXN 40000
#define BASE 10000
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<vector>
#define LL long long
using namespace std;
long long power(long long a, long long n)
{
    unsigned int i;long long s;
    if (!n) return 1;
    if(!a) return 0;
    i=n;s=a;
    while (i>>=1)
    {
        s*=s;
        if ((i&n)==i) s*=a;
    }
    return s;
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    long long a; long long n;
    long long s;
    while(cin>>a)
    {
       n=a;
       s=power(a,n);
       cout<<s;
       cout<<endl;
    }
    return 0;
}
