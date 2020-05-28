//#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#include<queue>
#define INF 10000000000
#define maxN 100010
using namespace std;
typedef long long ll;
int arr[maxN];
ll ans;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n, tmp2, tmp1;
    ios::sync_with_stdio(false);
    while(cin >> n)
    {
        priority_queue< int ,vector<int>,greater<int> >Q;
        ans=0;
    for(int i = 1 ; i <= n ; ++i)cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    for(int i = 1; i <= n; ++i)
    {
        Q.push(arr[i]) ;
    }
    for(int i = 1; i <= n - 1; ++i)
    {
        tmp1 = Q.top() ;
        Q.pop() ;
        tmp2 = Q.top() ;
        Q.pop() ;
        Q.push( tmp1 + tmp2 ) ;
        ans += tmp1 + tmp2 ;
    }
    printf("%lld\n", ans ) ;
    }
    return 0 ;
}
