#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include <ctime>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<stack>
#include<iomanip>
#include<cmath>
#include<bitset>
#define mst(ss,b) memset((ss),(b),sizeof(ss))
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> PL;
#define Maxn 500000
#define MOD 1000000007
map <int, ll> m;
void fun(int n, int k)
{
    for (int i = 2; i <= sqrt(n * 1.0); i++)
    {
        while (n % i == 0)
        {
            n /= i;
            m[i] += k;
        }
    }
    if (n > 1)
    {
        m[n] += k;
    }
}
ll quick_pow(ll a, ll b)
{
    ll ret = 1;
    while (b)
    {
        if (b & 1)
        {
            ret *= a;
            ret %= MOD;
        }
        b >>= 1;
        a *= a;
        a %= MOD;
    }
    return ret;
}
ll C(ll a, ll b)
{
    if (a < b || a < 0 || b < 0)
        return 0;
    m.clear();
    ll ret = 1;
    b = min(a - b, b);
    for (int i = 0; i < b; i++)
    {
        fun(a - i, 1);
    }
    for (int i = b; i >= 1; i--)
    {
        fun(i, -1);
    }
    for (__typeof(m.begin()) it = m.begin(); it != m.end(); it++)
    {
        if ((*it).second != 0)
        {
            ret *= quick_pow((*it).first, (*it).second);
            ret %= MOD;
        }
    }
    return ret;
}
int main()
{
    ll n,r;
    while(cin>>n>>r)
    {
        cout<<C(n+r-1,n)<<endl;
    }
    return 0;
}
