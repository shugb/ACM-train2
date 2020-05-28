#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#define LL long long
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    char a[128];
    int T, s;
    char *p;
    scanf("%d",&T);
    while(T-- > 0)
    {
        s = 0;
        scanf("%s", a);
        for (p = a; *p != '\0'; p++)
        {
            s = (*p - '0' + s * 10) % 13;
        }
        if(s%13==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
