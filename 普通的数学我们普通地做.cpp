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
long long power(int a, long long n)
{
    if (!n) return 1;
    int x=power(a,n/2);
    long long ans=(long long)x*x%1000000007;
    if(n%2==1)ans=ans*a%1000000007;
    return (int)ans;
}
int mod(int a, int b)
{
    return (int)((long long)a*b%1000000007);
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
       s=power(2,n-1);
       cout<<mod(s,a%1000000007)<<endl;
    }
    return 0;
}
