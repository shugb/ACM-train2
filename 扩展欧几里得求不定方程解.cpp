//#define LOCAL
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
#define Mod(a, b) (((a) % (b) + (b)) % (b))
using namespace std;
typedef long long ll;
ll exgcd(ll a, ll b, ll& x, ll& y)
{
    ll d = a;
    if(b) d = exgcd(b, a % b, y, x), y -= x * (a / b);
    else x = 1, y = 0;
    return d;
}
bool solve(ll a, ll b, ll c, ll& x, ll& y, ll& dx, ll& dy)
{
    if(a == 0 && b == 0) return 0;
    ll x0, y0;
    ll d = exgcd(a, b, x0, y0);
    if(c % d != 0) return 0;
    dx = b / d, dy = a / d;
    // 得到x的最小非负整数解
    x = Mod(x0 * c / d, dx);
    y = (c - a * x) / b;
    /* 得到y的最小非负整数解
    y = Mod(y0 * c / d, dy);
    x = (c - b * y) / a;
     */
    return 1;
}
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
     ll a, b, c;
    while(cin >> a >> b >> c)
    {
        cout << a << "x + " << b << "y = " << c << endl;
        ll x, y, dx, dy;
        if(solve(a, b, c, x, y, dx, dy))
        {
            cout <<"特解为:"<< "x = " << x <<" "<< "y = " << y <<endl;
        }
        else
            cout << "No solution!" << endl;
    }
    return 0;
}
