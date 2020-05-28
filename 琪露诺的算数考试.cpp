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
    int t,n,flag,s;
    char a[5];
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        s=n;
        while(n--)
        {
            for(int i=0;i<5;i++)
            {
                cin>>a[i];
            }
            if(a[1]=='+'&&(a[0]+a[2]-'0'==a[4]))
            {
                flag++;
            }
            else if(a[1]=='-'&&(a[0]-a[2]+'0'==a[4]))
            {
                flag++;
            }
        }
        cout<<flag<<'/'<<s<<endl;
    }
    return 0;
}
