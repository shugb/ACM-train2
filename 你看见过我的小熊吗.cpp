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
int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int Count=0;
      int k[1000]={0};
        int b,Max=0;
        cin>>b;
        char t[b];
        for(int i=0;i<b;i++)
        {
            cin>>t[i];
        }
    for(int i=0;i<b;i++)
        {
            if(t[i]=='8')
            {
                k[Count]++;
            }
            else
            {
                Count++;
            }
        }
        Max=k[0];
            for(int i=1;i<b;i++)
            {
                if(Max<k[i])
                {
                    Max=k[i];
                }
            }
        cout<<Max<<endl;
    }
return 0;
}
