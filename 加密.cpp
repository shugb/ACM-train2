#define LOCAL
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
#define LL long long
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n,m;
    while(cin>>n>>m)
    {
        char a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
           if(a[i]+m>'z')
           a[i]=a[i]+m-'z'+'a'-1;
        else if(a[i]+m<='z'&&a[i]>='a')
            a[i]=a[i]+m;
        else if(a[i]+m>'Z')
            a[i]=a[i]+m-'Z'+'A'-1;
        else if(a[i]+m<='Z'&&a[i]>='A')
            a[i]=a[i]+m;
        }
        for(int i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}
