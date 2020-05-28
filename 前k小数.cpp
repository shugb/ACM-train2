//#define LOCAL
#include<iostream>
#include<cstdio>
#include<cmath>
#define INF 10000000000
#include<cstring>
#include<algorithm>
#include <iomanip>
#define offset 1000000
#define eps 1e-5
#define LL long long
long long a[offset],b[offset];
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n,m,q,k;
    while(scanf("%d %d",&n,&m))
    {
        k=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        b[0]=1;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i])
            {
                b[++k]+=1;
            }
            else
            {
                b[k]+=1;
            }
        }
        for(int i=1;i<n;i++)
        {
            b[i]=b[i]+b[i-1];
        }
        while(m--)
        {
            scanf("%d",&q);
            printf("%d\n",b[q-1]);
        }
    }
    return 0;
}
