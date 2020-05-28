#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#define MAXN 5001
#include<cstring>
#include<string>
#include<algorithm>
#include <iomanip>
#include<vector>
#define LL long long
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
         int a,b;
         scanf("%d %d",&a,&b);
         while(!(a==0&&b==0))
         {
             cout<<a+b<<endl;
             scanf("%d %d",&a,&b);
         }
    return 0;
}
